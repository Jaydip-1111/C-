#include<iostream>
using namespace std;
class xyz{
           int a,b;
           public:
               xyz(){
                   cout<<"Enter A:-";
                   cin>>a;
               }
               void operator ++(){
                 ++a;
               }
               void operator --(){
                --b;
               }
               void disp(){
                cout<<"a is:-"<<a<<endl;
               }
               void abc(){
                cout<<"b is:-"<<b;
               }
};
int main(){
            xyz x1;
            ++x1;
            --x1;
            x1.disp();
            x1.abc();
            return 0;
}