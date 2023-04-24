#include<iostream>
#include<stdio.h>
using namespace std;
class railway
{
             public:
                 int train_no;
                 char train_name[50];
                 char train_source[50];
                 char train_desitination[50];
                 char train_time[50];
                 void getData();
                 void putData();
};
void railway :: getData()
{
                cout<<"Enter train_no:-";
                cin>>train_no;

                cout<<"Enter train_name:-";
                cin>>train_name;

                cout<<"Enter train_source:-";
                cin>>train_source;

                cout<<"Enter train_desitination:-";
                cin>>train_desitination;

                cout<<"Enter train_time:-";
                cin>>train_time;
}
void railway :: putData()
{
                 cout<<train_no<<"\t";
                 cout<<"\t"<<train_name<<"\t";
                 cout<<"\t"<<train_source<<"\t";
                 cout<<"\t"<<train_desitination<<"\t";
                 cout<<"\t"<<train_time<<"\t"<<endl;
}
int main(){
             railway r1[50];
             int n,i;

             cout<<"Enter number of train:-";
             cin>>n;

             for(i=0;i<n;i++)
             {
                 r1[i].getData();
             }
             cout<<"------Railway Information------"<<endl;
             cout<<"train_no\ttrain_name\ttrain_source\ttrain_desition\ttrain_time"<<endl;
             for(i=0;i<n;i++)
             {
                r1[i].putData();
             }
               cout<<"------- End Information ------";
               return 0;
}
