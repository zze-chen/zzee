#include <iostream>
using namespace std;
  
  
int main(){  
    int num;  
    cin >> num;
  
    int went[num], back[num];  
    int cnt;  
    int a = 0;  
    for(int i=0; i<num; i++){  
        cin >> went[i] >> back[i] ;
    }  
    cnt = num;  
    for(int i=0; i<num-1; i++) {  
        for(int j=a+1; j<num; j++) {  
            //比較完第一個後再繼續將第一個跟第二個比較
            if(back[i] <= went[j]){
            //若找到有重疊的即--  s
                cnt--; a++;  
                break;  
            }  
        }  
    }  
    cout << cnt << endl;
}  