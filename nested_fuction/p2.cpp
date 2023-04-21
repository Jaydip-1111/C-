#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
           public:
           void add(int p, int q)
           {
              cout<<"Addition is"<<p+q<<endl;
              sub(p,q);
           }
           void sub(int,int);
           void mul(int,int);
           void div(int,int);
};
void student :: sub(int p,int q){
      cout<<"subtraction is:"<<p-q<<endl;
      mul(p,q);
}
void student :: mul(int p,int q){
      cout<<"multiplication is:"<<p*q<<endl;
      div(p,q);
}
void student :: div(int p,int q){
      cout<<"division is:"<<p/q<<endl;
      
}
int main()
{
      student s1;
      s1.add(75,15);
      return 0;
}
