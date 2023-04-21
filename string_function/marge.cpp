#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
          char name[50],name2[50];
          int i,len1,len2,j=0,total;
          
          cout<<"enter name1:-";
          cin>>name;

          cout<<"enter name2:-";
          cin>>name2;
          len1=strlen(name);
          len2=strlen(name2);

          total=len1+ len2;
          for(i=len1;i<total;i++)
          {
             
              name[i] = name2[j];
              j++;   
          } 
          name[i]='\0';
          cout<<"marge name is:-"<<name;
}       