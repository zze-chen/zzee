#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b;
    float sum=0;
    while(cin >> a >> b){
        sum=(a*b)/2;
        cout << fixed << setprecision(1) << sum << endl;
    }
    return 0;
}