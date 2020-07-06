#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a=0;
    double square=0;
    cin >> a ;
    square=a*a;
    square=(square*10+0.4);
    square=(square)/10;
    cout.setf(ios::showpoint);
    cout << fixed << setprecision(1) << square << endl;
}