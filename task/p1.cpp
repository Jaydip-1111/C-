#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
                   public:
                   int std_no;
                   char std_name[50];
                   int m1,m2,m3;
                   void getData();
                   void putData();
};

void student :: getData()
{
                   cout<<"Enter Student Roll_no:-";
                   cin>>std_no;

                   cout<<"Enter Student name:-";
                   cin>>std_name;

                   cout<<"Enter stdunet 3 subjects marks:-";
                   cin>>m1>>m2>>m3;  
}
void student :: putData()
{
                  cout<<std_no<<"\t";
                  cout<<std_name<<"\t\t";
                  cout<<m1<<"\t"<<m2<<"\t"<<m3<<endl;
}
int main(){
             student s1[20];
             int n,i;

             cout<<"Enter of Student:-";
             cin>>n;

             for(i=0;i<n;i++)
             {
                s1[i].getData();
             }
             cout<<"----- Student Information -----"<<endl;
             cout<<"Roll_no\tstd_name\tm1\tm2\tm3"<<endl;

             for(i=0;i<n;i++)
             {
                s1[i].putData();
             }
             cout<<"------- End Information ------";
             return 0;
}
