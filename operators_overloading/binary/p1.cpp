#include<iostream>
using namespace std;
class xyz{
           int a;
           public:
               void enter(){
                   cout<<"Enter A:-";
                   cin>>a;
               }
               xyz operator +(xyz x1){
                  xyz x2;
                  x2.a = a+x1.a;
                  return x2;
               }
               void disp(){
                  cout<<"a is :- "<<a;
               }
};
int main(){
            xyz x1,x2,x3;
            x1.enter();
            x2.enter();
            x3 = x1+x2;
            x3.disp();
            return 0;
}