#include<iostream>
#include<conio.h>
using namespace std;
int main(){
             int a=97;
             int & b = a;

             cout<<"a is:-"<<a<<endl;
             cout<<"b is:-"<<b<<endl;
             cout<<"address is"<<&b;
             
}