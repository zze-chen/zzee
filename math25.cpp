#include <iostream>
using namespace std;
  
int main(){  
    int num;  
    int ans = 0;  
    cin >> num ;   
    for(int i=1; i<=num; i++){  
        if(i%3 == 0){  
            ans += i;  
        }  
    }  
    cout << ans << endl; 
}  