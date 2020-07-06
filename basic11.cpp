#include <iostream>
using namespace std;
   
  
int main(){  
    int matrix[10][10];  
    int row, column;  
    int i, j;  
    while(cin >> row >> column ){  
        for (i = 0; i < row; i++){  
            for (j = 0; j < column; j++){  
                cin >> matrix[i][j]; 
            }  
        }  
        for (i = 0; i < column; i++){  
            for (j = 0; j < row; j++){  
                cout << matrix[j][i] ; 
                if(j != row-1){
                    cout << " " ;
                }  
            }  
            cout << endl; 
        }  
    }  
}  