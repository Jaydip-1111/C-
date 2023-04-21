#include<iostream>
using namespace std;
int main(){
               int num;

               cout <<"Enter Any Number:-";
               cin >> num;

               if(num % 2 == 0)
               {
                 cout << num << "Even Number"<<endl;
               }
               else
               {
                 cout << num << "Odd Number"<<endl;
               }

               if(num % 4 == 0)
               {
                cout << num << "leap Year"<<endl;
               }
               else
               {
                cout << num << "Not Leap Year"<<endl;
               }
               
               
}