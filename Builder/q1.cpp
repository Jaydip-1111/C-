#include<iostream>
#include<stdio.h>
using namespace std;
class employee{
         public:
               int emp_id;
               int emp_salary;
               int contact; 
               char emp_name[50];
               char emp_role[50];
               char experience[50];
               char emp_address[50];
               char emp_email[50];
               void getData();
               void putData();
};
void employee :: getData()
{
                cout<<"Enter emp_id:-";
                cin>>emp_id;

                cout<<"Enter emp_name:-";
                cin>>emp_name;
                
                cout<<"Enter emp_role:-";
                cin>>emp_role;

                cout<<"Enter emp_salary";
                cin>>emp_salary;

                cout<<"Enter emp_experience:-";
                cin>>experience;

                cout<<"Enter emp_address:-";
                cin>>emp_address;

                cout<<"Enter emp_email:-";
                cin>>emp_email;

                cout<<"Enter emp_contact:-";
                cin>>contact;
                   
}
void employee :: putData()
{
             cout<<emp_id<<"\t";
             cout<<"  "<<emp_name<<"\t";
             cout<<"\t"<<emp_role<<"\t";
             cout<<"\t"<<emp_salary<<"\t";
             cout<<"\t"<<experience<<"\t";
             cout<<"\t"<<emp_address<<"\t";
             cout<<"\t"<<emp_email<<"\t";
             cout<<"\t"<<contact<<"\t"<<endl;
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
            cout<<"empid\temp_name\temployee_role\temp_salary\te_experience\temp_address\temployee_email\t  employee_contact"<<endl;
            for(i=0; i<n; i++)
            {
                e1[i].putData();
            }
            cout<<"-----End Information-----";
            return 0;
}
