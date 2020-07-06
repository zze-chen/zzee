#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {  
    int num;  
    double output;  
  
    cin >>  num ;
    output = num*1.6;  
    cout << fixed << setprecision(1) << output << endl;
}  