#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
  int i, num, arr[50], mult = 0, srt = 0, temp;

  cout << "Enter the size of array:-";
  cin >> num;

  cout << "enter the element of array:-";

  for (i = 0; i < num; i++)
  {
    cin >> arr[i];
  }

  for (i = 0; i < num; i++)
  {
    
    srt = arr[i] / 2;
    while (srt != temp) 
    {
      temp = srt; 
      srt = (arr[i] / temp + temp) / 2;

    }
    cout << "Squre root is " << arr[i] << " = " << srt << endl;
  }
}