#include <iostream>
#include<stdio.h>
using namespace std;
   
int getFactorial(int num);
  
int main(){
    int num;
    cout << "Enter a Number:=";
    cin >> num;
   
    cout << "Factorial of " << num << " = " << 
        getFactorial(num);
       
    return 0;
}
   
int getFactorial(int num){
    if(num <= 1){
         return 1;
    }
    return num * getFactorial(num - 1);
}