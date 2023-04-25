#include<iostream>
using namespace std;
class  abc
{
       public:
       int cube(int);
};
class xyz:public abc{
           public:
           int cube(int r){
            return r*r*r;
           }
};
int main(){
           int no;
           xyz x1;
           cout<<"Enter no:-";
           cin>>no;
           cout<<"cube is"<<x1.cube(no);
           return 0;
}