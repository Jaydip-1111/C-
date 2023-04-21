#include<iostream>
#include<stdio.h>
using namespace std;
class abc 
{
         public:
               void getData()
               {
                  cout<<"Base Class"<<endl;
               }
};
class xyz : public abc{
               public:
                 void putData()
                 {
                    cout<<"Derived Class"<<endl;
                 }
};
int main(){
           xyz x1;
           x1.getData();
           x1.putData();
           return 0;
}