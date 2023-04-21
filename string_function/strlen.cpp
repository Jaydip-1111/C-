#include<iostream>
#include<conio.h>
using namespace std;
int main(){
               char name[50];
               int cnt=0,i;

               cout<<"enter your name:-";
               cin>>name;

               cout<<"your name is:-"<<name<<endl;

               for(i=0;name[i]!='\0';i++)
               {
                   cnt++;

               }
               cout<<"length of name is:-"<<cnt;
               return 0;
}