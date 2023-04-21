#include<iostream>
#include<stdio.h>
using namespace std;
class abc
{
         public:
         static int a;

         void disp()
         {
            cout<<"a is:-"<<a;
         }
};
int abc :: a = 25;
int main(){
              abc a1;
              a1.disp();
              return 0;
}
