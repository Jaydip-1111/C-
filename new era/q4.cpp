#include<iostream>
#include<stdio.h>
using namespace std;
class house{
             public:
                    int h_no,h_price;
                    char h_name[20];

                    void getData()
                    {
                      cout<<"enter house number:-";
                      cin>>h_no;

                      cout<<"enter houde price:-";
                      cin>>h_price;

                      cout<<"enter house name:-";
                      cin>>h_name;
                    }
                    void putData();      
};
void house :: putData(){
             
              cout<<"house number is:-"<<h_no<<endl;
              cout<<"houser price is:-"<<h_price<<endl;
              cout<<"house name is:-"<<h_name<<endl;
}
int main(){
            house h1;
            h1.getData();
            h1.putData();
}
