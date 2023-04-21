#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
             int a,b;
             public:
             void getData(int p,int q)
             {
                a=p;
                b=q;
             }
             friend int rect_area(student);
};
int rect_area (student s1){
         return s1.a*s1.b;
}
int main(){
             student obj;
             int a,b;
             cout<<"Enter value of A&b";
             cin>>a>>b;

             obj.getData(a,b);
             cout<<"multiplication is"<<rect_area<<endl;

}

