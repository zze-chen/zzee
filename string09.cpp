#include <iostream>
using namespace std;
  

int main(){
    int a,b;
    cin >> a >> b ;
    for(int i=b;i>0;i--){
        for(int i=a;i>0;i--){
            cout << "*" ;
        }
        cout <<  endl;
    }
    return 0;
}