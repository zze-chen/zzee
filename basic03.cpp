#include <iostream>
using namespace std;
  
int main(){  
    int num1, num2, ans, i;  
    cin >> num1 >> num2;
    int d =(num2*num2)+(num1*num1);  
    for(i=1 ; i<d/2; i++) {  
        if(i*i > d){
            break;
        }  
    }    
    if(i < 100)  {  
        cout << "inside" << endl;  
    }else{  
        cout << "outside" << endl; 
    }
}  