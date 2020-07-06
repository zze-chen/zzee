#include <iostream>
using namespace std;
  
  
int main(){  
    int a, b, i;  
    cin >> a >> b ;    
    if(a<=0 || b<=0){
        return 0;
    }else{  
        while(a>0 && b>0){  
            if(a>b){  
                a = a%b;  
            }else{  
                b = b%a;  
            }  
        }  
        if(a==0){  
            cout << b << endl; 
        }else{  
            cout << a << endl; 
        }  
    }  
}  