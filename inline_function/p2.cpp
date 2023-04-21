#include<iostream>
#include<stdio.h>
using namespace std;
class abc{
             public:
             inline int mul(int,int);
};
inline int abc::mul(int a,int i)
{
    return a*i;
}
int main(){
            abc a1;
            int i,num;
            cout<<"enter any number:-";
            cin>>num;
            for(i=1;i<=10;i++)
            {
                cout<<num<<"*"<<i<<"="<<a1.mul(num,i)<<endl;
            }
            return 0;
}