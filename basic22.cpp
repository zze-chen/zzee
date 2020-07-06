#include <iostream>
using namespace std;
  

int main()
{
        int arry[3][3];
        int i, j;

        for(i=0; i<3; i++)
        {
                for(j=0; j<3; j++)
                {
                        cin >> arry[i][j];  
                }
        }
        for(i=0; i<3; i++)
        {
                if((arry[i][0] == arry[i][1]) && (arry[i][1] == arry[i][2]))
                {
                        cout << "True" << endl;
                        return 0;
                }
        }
        for(i=0; i<3; i++)
        {
                if((arry[0][i] == arry[1][i]) && (arry[1][i] == arry[2][i]))
                {
                        cout << "True" << endl;
                }
        }
        if((arry[0][0] == arry[1][1]) && (arry[1][1] == arry[2][2]))
        {
                cout << "True" << endl;
                return 0;
        }
        if((arry[0][2] == arry[1][1]) && (arry[1][1] == arry[2][0]))
        {
                cout << "True" << endl;
                return 0;
        }
        cout << "False" << endl;
}