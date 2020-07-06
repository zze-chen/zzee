#include <iostream>
using namespace std;
  

int main(){
    int a,b;
    int sum1=0, sum2=0,sum=0;
    cin >> a >> b;
    if(a>b){
        for(int i=b;i<=a;i++){
            sum+=i;
        }
        cout << sum <<  endl;
    }else if(a<b){
        for(int i=a;i<=b;i++){
            sum+=i;
        }
        cout << sum <<  endl;
    }
    return 0;
}