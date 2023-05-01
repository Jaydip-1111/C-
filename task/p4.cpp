#include<iostream>
using namespace std;
class emp
{
          public:
                 int emp_id;
                 int salary;
                 char emp_name[50];
                 char emp_address[50];
                 char emp_role[50];
                 void getData();
                 void putData();
};
void emp :: getData(){
                   cout<<"Enter Emp_id:-";
                   cin>>emp_id;

                   cout<<"Enter Emp_Name:-";
                   cin>>emp_name;

                   cout<<"Enter Emp_salary:-";
                   cin>>salary;

                   cout<<"Enter Emp_Role:-";
                   cin>>emp_role;

                   cout<<"Enter Emp_Address:-";
                   cin>>emp_address;
}
void emp :: putData(){
                
                  cout<<emp_id<<"\t";
                  cout<<"\t"<<emp_name<<"\t";
                  cout<<"\t"<<salary<<"\t";
                  cout<<"\t"<<emp_role<<"\t";
                  cout<<"\t"<<emp_address<<"\t"<<endl;
}
int main(){
             emp e1[20];
             int i,n;

             cout<<"Enter number of Employee:-";
             cin>>n;

             for(i=0;i<n;i++)
             {
                e1[i].getData();
             }
             cout<<"--------- Empolyee Information --------"<<endl;
             cout<<"employee_id\tempolyee_name\temp_salary\tempolyee_role\temp_address"<<endl;
             for(i=0;i<n;i++)
             {
                e1[i].putData();
             }
             cout<<"-------- End Information --------";
             return 0;
}


