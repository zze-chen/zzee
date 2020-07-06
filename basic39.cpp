#include <iostream>
using namespace std;
  

int main(){
    int num;
    int grade[10][3];
    cin >> num;
    for(int i=0;i<num;i++){
        for(int j=0;j<3;j++){
            cin >> grade[i][j];
        }
    }
    for(int i=0;i<num;i++){
        //三科大於60
        if(grade[i][0]>=60 && grade[i][1]>=60 && grade[i][2]>=60){
            cout << "P" << endl;
        }else if(grade[i][0]>=60 && grade[i][1]>=60 && grade[i][2]<=60){
            //總和超過220
            if((grade[i][0]+grade[i][1]+grade[i][2])>=220){ 
                cout << "P" << endl;
            }else{ 
                cout << "M" << endl;
            }
        }else if(grade[i][0]>=60 && grade[i][1]<=60 && grade[i][2]>=60){
            //總和超過220
            if((grade[i][0]+grade[i][1]+grade[i][2])>=220){ 
                cout << "P" << endl;
            }else{ 
                cout << "M" << endl;
            }
        }else if(grade[i][0]<=60 && grade[i][1]>=60 && grade[i][2]>=60){
            //總和超過220
            if((grade[i][0]+grade[i][1]+grade[i][2])>=220){ 
                cout << "P" << endl;
            }else{ 
                cout << "M" << endl;
            }
        }else if(grade[i][0]<=60 && grade[i][1]<=60 && grade[i][2]>=80){
            cout << "M" << endl;
        }else if(grade[i][0]<=60 && grade[i][1]>=80 && grade[i][2]<=60){
            cout << "M" << endl;
        }else if(grade[i][0]>=80 && grade[i][1]<=60 && grade[i][2]<=60){
            cout << "M" << endl;
        }else{
            cout << "F" << endl;
        }
    }
    return 0;
}