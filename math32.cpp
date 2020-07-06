#include <iostream>
using namespace std;
  

int main(){
    int a=0;
    int save=0;
    int sum=0;
    cin >> a ;
    if(a<100 || a>999){
        return 0;
    }
    save=a;
    int b=0, c=0, d=0;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a;
    sum=(d*d*d)+(b*b*b)+(c*c*c);
    if(sum==save){
        cout << "Yes" <<  endl;
    }else{
        cout << "No" <<  endl;
    }
}