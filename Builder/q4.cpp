#include<iostream>
#include<stdio.h>
using namespace std;
class student
{  
                public:
                int x=20,y;

                student(){
                    cout<<"Defualt constructor called"<<endl;
                }
                student(int a,int b)
                {
                    cout<<"Addition is:-"<<a+b<<endl;
                }

                void disp(int x,int y)
                {
                    cout<<"x is:-"<<x<<endl;
                    cout<<"y is:-"<<y<<endl;
                }
                student (student& s1)
                {
                    y = x+s1.x;
                    cout<<"x is:-"<<x<<endl;
                    cout<<"x is:-"<<s1.x<<endl;
                    cout<<"y is:-"<<y<<endl;
                }
                ~ student(){
                     cout<<"object deleted"<<endl;
                 }
};
int main()
{
          student s1;
          student s2;
          student s4=s2;
          s1.disp(22,23);
          student s3(s1);
          return 0;
}
