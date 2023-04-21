#include<iostream>
using namespace std;
class A{
         protected:
         int a,b;
         void add()
         {
            cout<<"Enter a & b:-";
            cin>>a>>b;
         }
         void printdata()
         {
            cout<<"Addition is:-"<<a+b<<endl;
         }
};
class B : protected A{
           public:
           void setdata()
           {
               add();
               printdata();
           }
};
class C : private A{
            public:
                  void mult()
                  {
                    cout<<"Enter A & B :-";
                    cin>>a>>b;
                    cout<<"Multiplication is:-"<<a*b;
                  }
};
int main(){
           B obj;
           C objc;
           obj.setdata();
           objc.mult();
}