#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
              int i,size,cube[50];
              cout<<"Enter the size of array:-";
              cin>>size;
              cout<<"enter the element of array:-";

              for(i=0;i<size;i++)
              {
                cin>>cube[i];
              }
              cout<<"cube is:-";

              for(i=0;i<size;i++)
              {
                cout<<cube[i] * cube[i] * cube[i] << endl;
              }
}