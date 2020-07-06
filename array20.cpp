#include <iostream>
using namespace std;

int main(){
    int num;
    int input[num];
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> input[i];
    }
    int c;  
    for(int i=0;i<num;i++){  
        c=0;  
        for(int j=0;j<num;j++){  
            if(input[i]==input[j]){  
                c++;  
            }
            if(c>1){  
                break;
            }  
        }  
        if(c>1){  
            break;
        }  
    }  
    if(c>1){
        cout << "0" << endl ;
    }else{
        cout << "1" << endl ;
    }
}