#include <iostream>
#include <iomanip>
using namespace std;
  
  
int main(){  
    float num[10];  
    float min, max;  
    for(int i=0; i<10; i++){  
        cin >> num[i];
    }  
    min = num[0];  
    max = num[0];  
    for(int i=1; i<10; i++){  
        if(num[i] > max){
            max = num[i];
        }else if(num[i] < min){
            min = num[i];
        }  
    }  
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;
}  