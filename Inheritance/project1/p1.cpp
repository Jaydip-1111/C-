#include<iostream>
using namespace std;
class x{
          public:
              int a,b,c;
};
class y : public x{    
           public:
                 void getData(){
                     cout<<"Enter Value a:-";
                     cin>>a;

                     cout<<"Enter Value b:-";
                     cin>>b;

                     cout<<"Enter Value c:-";
                     cin>>c;
                 }

                 void setData(){
                      int a1 = a*a*a;
                      int b1 = b*b*b;
                      int c1 = c*c*c;
                     cout<<"cube is:-"<<a*a*a<<endl;
                     cout<<"cube is:-"<<b*b*b<<endl;
                     cout<<"cube is:-"<<c*c*c<<endl;
                     cout<<"Addition is:-"<<a1+b1+c1<<endl; 
                 } 
                       
};
int main(){
           y y1;
           y1.getData();
           y1.setData();
           
}