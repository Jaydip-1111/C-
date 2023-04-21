#include<iostream>
#include<stdio.h>
using namespace std;
class employee{
         public:
               int emp_id,emp_salary;
               char emp_name[50];
               void getData();
               void putData();
};
void employee :: getData()
{
                cout<<"Enter emp_id:-";
                cin>>emp_id;

                cout<<"Enter emp_name:-";
                cin>>emp_name;

                cout<<"Enter emp_salary";
                cin>>emp_salary;
                   
}
void employee :: putData()
{
             cout<<emp_id<<"\t";
             cout<<emp_name<<"\t";
             cout<<emp_salary<<endl;
}
int main(){
             employee e1[10];
             int n,i;
             cout<<"Enter of Employee:-";
             cin>>n;

            for(i=0; i<n; i++)
            {
                e1[i].getData();
            }
            cout<<"-------Employee Information -------"<<endl;
            cout<<"empid\te_name\te_salary"<<endl;
            for(i=0; i<n; i++)
            {
                e1[i].putData();
            }
            cout<<"-----End Information-----";
            return 0;
}
