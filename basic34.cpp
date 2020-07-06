#include <iostream>
#include <iomanip>
using namespace std;
  

int main(){
    int weight,gender;
    float x;

    while(cin >> weight >> gender){
        if(gender==1){
            x = (weight-80)*0.7;
            cout <<  fixed << setprecision(1) << x << endl;
        }else if(gender==2){
            x = (weight-70)*0.6;
            cout <<  fixed << setprecision(1) << x << endl;
        }
    }
}