#include <iostream>
using namespace std;
  
  
int main(){  
    int n, a1, a2, a3, sum;  
    int count3=0, count2=0, count1=0;  
    int cost;
    cin >> n >> a1 >> a2 >> a3; 
    cost =((a1*15)+(a2*20)+(a3*30));
    sum=n-cost;  
    if(sum < 0){  
        cout << "0" << endl;
        return 0;  
    }else{    
        while(sum >= 50){  
            sum -= 50;  
            count1++;  
        }  
        while(sum >= 5){  
            sum -= 5;  
            count2++;  
        }  
        //剩下總數即為1元零錢總數
        count3 = sum;  
    }  
    cout << count3 << ',' << count2 << ',' << count1 << endl;
}  