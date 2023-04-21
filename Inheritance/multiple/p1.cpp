#include<iostream>
using namespace std;
class abc{
           int a,b;
           public:
              void getData(int p,int q){
                  this->a = p;
                  this->b = q;
              }    
              void setData(){
                   cout<<"multiple is:-"<<a*b<<endl;
              }     
};
class xyz{
           int r;
           public:
           int cube(int p){
             this->r = p;
             return r*r*r;
           }
};
class pqr : public abc,public xyz{
          int z;
          public:
           pqr(int p){
            this->z=p;
           }
           int square(){
             return z*z;
           }
};
int main(){
           pqr p1(10);
           cout<<"square is:-"<<p1.square()<<endl;
           cout<<"Cube is:-"<<p1.cube(5)<<endl;
           p1.getData(6,12);
           p1.setData();
           return 0;
}