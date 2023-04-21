#include<iostream>
using namespace std;
class A{
          public:
            virtual void disp(){
                cout<<"class A called"<<endl;
            }
};
class B : virtual public A{
           public:
              void disp(){
                 cout<<"class B called"<<endl;
              }        
      
};
class C : virtual public A{
               public:
                  void disp(){
                    cout<<"class C called"<<endl;
                  }
};

class D : virtual public B,public C{
              public:
                   void disp(){
                       cout<<"class D called"<<endl;
                   }
};
int main(){
        //   D objD;
        //   C objC;
        //   B objB;
        //   A *objA;  // pointer object
        //   objA =&objC;
        //   objA->disp();
        //   objA =&objB;
        //   objA->disp();
        //   A obja;
        //   objA = &obja;
        //   objA->disp();
          
          D objD;
          objD.A::disp();
          objD.B::disp();
          objD.C::disp();
          objD.disp();
}

