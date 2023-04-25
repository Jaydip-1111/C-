//method overloading
#include<iostream>
using namespace std;
#define PI 3.14
float area(float r){
      return PI * r * r;
}
float area(float l,float h){
      return l * h;
}
float area(float l,float h,float b){
    return l * h * b;
}
int main(){
            int no;
            cout<<"Enter number:-";
            cin>>no;
            cout<<"area of circle is:-"<<area(no)<<endl;
            cout<<"area of Rectangle is:-"<<area(no,no,no)<<endl;
            cout<<"area of tringle:-"<<area(no,no)<<endl;
            return 0;
}