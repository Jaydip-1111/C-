#include<iostream>
#include<stdio.h>
using namespace std;
class employee  
{
              public:
                int emp_id;
                char emp_name[50];
                int salary;
                void getData();
                void putData();
};
void employee :: getData()
{
                cout<<"Enter emp_id:-";
                cin>>emp_id;

                cout<<"Enter emp_name:-";
                cin>>emp_name;

                cout<<"Enter emp_salary:-";
                cin>>salary;
}
void employee :: putData()
{
               cout<<emp_id<<"\t";
               cout<<emp_name<<"\t\t";
               cout<<salary<<"\t"<<endl;
}
int main(){
               employee e1[50];
               int i,n;
               
               cout<<"Enter employee:-";
               cin>>n;

               for(i=0;i<n;i++)
               {
                   e1[i].getData();
               }
               cout<<"----- Employee Information -----"<<endl;
               cout<<"emp_id\temp_name\tsalary"<<endl;

               for(i=0;i<n;i++)
               {
                  e1[i].putData();
               }
               cout<<"------- End Information ------";
               return 0;

}
