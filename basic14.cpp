#include <iostream>
using namespace std;
  

int main(){
    int num[100];
    int i=0;
    int input=0;
    int reload=0;
    int sum=0;
    cin >> input;
    reload=input;
    while((input/10)>=1){
        num[i]=input%10;
        input/=10;
        if(input<10){
            i++;
            num[i]=input;
            break;
        }
        i++;
    }
    sum=num[0];
    for(int j=0;j<i;j++){
        sum=sum*10+num[j+1];
    }
    if(reload==sum){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}