#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class emp{
           public:
                   int emp_id;
                   char name[100];
                   int salary;
                   int age;
                   
};

int main()
{
      emp el;
      cout<<"Enter emp_id:-";
      fflush(stdin);
      cin>>el.emp_id;

      cout<<"Enter salary:-";
      cin>>el.salary;

      cout<<"Enter age:-";
      cin>>el.age;

      cout<<"Enter emp name:-";
      cin>>el.name;

      cout<<"emp_id is:-"<<el.emp_id<<endl;
      cout<<"emp name is:-"<<el.name<<endl;
      cout<<"emp salary is:-"<<el.salary<<endl;
      cout<<"emp age is:-"<<el.age<<endl;
}

