#include <iostream>
using namespace std;

int main()
{
  int arr[6];
  int output = 0;
  for(int i = 0; i < 6; i++){
    cin >> arr[i];
    output += arr[i] * arr[i] * arr[i];
  }
  cout << output << endl;
  return 0;
}