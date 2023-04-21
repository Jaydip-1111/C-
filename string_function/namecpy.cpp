#include<iostream>
#include<conio.h>
using namespace std;
int main(){
               char name[50],name2[50];
               int i;

               cout<<"enter your name:-";
               cin>>name;

            //    cout<<"your name is:-"<<name<<endl;

               for(i=0;name[i]!='\0';i++)
               {
                 name2[i] = name[i];
               }
               cout <<"copy of name is:-"<<name;
               return 0;
}