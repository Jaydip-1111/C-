#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
              char name[50],name2[50];
              int i,len,j=0;
              cout<<"Enter your name is:-";
              cin>>name;
              len=strlen(name);
              cout<<"your name is:-"<<name<<endl;
              for(i=len-1;i>=0;i--)
              {
                name2[j] = name[i];
                j++;
              }
              cout<<"reverse name is:-"<<name2;
}