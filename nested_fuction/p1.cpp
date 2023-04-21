#include<iostream>
#include<stdio.h>
using namespace std;
class p1
{
    public:
            int a,b;
    public:
            void getData()
            {
                cout<<"Enter a & b";
                cin>>a>>b;
            }
            void putData();
};
void  p1 :: putData(){
        cout<<"Addition is:-"<<a+b<<endl;
}
int main()
{
            p1 s1;
            s1.getData();
            s1.putData();
         return 0;
}