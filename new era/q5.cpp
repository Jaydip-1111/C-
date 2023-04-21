#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
          private:
                   int a,b;
          public:
                  void getData(int p,int q){
                    this->a=p;
                    this->b=q;
                  } 
                  void putData(){
                   cout<<"Addtion is:-"<<a+b<<endl;
                   cout<<"Subtraction is:-"<<a-b<<endl;
                   cout<<"Multiplication is:-"<<a*b<<endl;
                   cout<<"Division is:-"<<a/b<<endl;
                  }
};
int main(){
            student s1;
            s1.getData(45,5);
            s1.putData();
            return 0;
}