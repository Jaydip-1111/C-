#include<iostream>
using namespace std;
class xyz{
           int a;
           public:
               xyz(){
                   cout<<"Enter A:-";
                   cin>>a;
               }
               void operator ++(){
                 ++a;
               }
               void disp(){
                cout<<"a is:-"<<a;
               }
};
int main(){
            xyz x1;
            ++x1;
            x1.disp();
            return 0;
}