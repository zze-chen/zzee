#include <iostream>
using namespace std;
  

int main(){
    char word;
    while(cin >> word){
        if(word=='E'){
            cout << "ByeBye" << endl;
        }else if(word=='M'){
            cout << "Male" << endl;
        }else if(word=='F'){
            cout << "Female" << endl;
        }
    }
    return 0;
}