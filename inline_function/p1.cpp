#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class abc{
            public:
            inline int getdata(int a){return a*a*a;}
            inline int add(int,int);
            inline int sub(int,int);
            inline int mul(int,int);
            inline int div(int,int);
            inline int mod(int,int);
};
inline int abc::add(int a,int b)
{
    return a+b;
  
}
inline int abc::sub(int a,int b)
{
    return a-b;
}
inline int abc::mul(int a,int b)
{
    return a*b;
}
inline int abc::div(int a,int b)
{
    return a/b;
}
inline int abc::mod(int a,int b)
{
    return a%b;
}
int main(){
         abc a1;
         int p,q;
         cout<<"enter p & q";
         cin>>p>>q;

         cout<<"cube is:-"<<a1.getdata(p)<<endl;

         cout<<"Addition is:-"<<a1.add(p,q)<<endl;
         cout<<"subtration is:-"<<a1.sub(p,q)<<endl;
         cout<<"multiplication is:-"<<a1.mul(p,q)<<endl;
         cout<<"divsion is:-"<<a1.div(p,q)<<endl;
         cout<<"moduals is:-"<<a1.mod(p,q)<<endl;
         return 0;
}