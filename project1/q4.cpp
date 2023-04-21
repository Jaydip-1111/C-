#include<iostream>
using namespace std;
int main(){
            char num;

            cout <<"Enter number:-";
            cin >> num;

            if(num >='a' && num <='z' || num >='A' && num <='Z')
               { 
                 cout << num <<" is alphebetic"<<endl;
               }
               else if(num >='0' && num <='9')
               {
                 cout << num <<" no is digit"<<endl;
               }
            else{
                 cout << num <<" is special charcter";
                }
}