#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class emp{
           public:
                int  emp_id;
                char name[100];
                int  salary;
                int  age;

                   
};

int main(){
             emp el;
             el.emp_id=12;
             el.salary=12000;
             el.age=24;
             strcpy(el.name,"jaydip");
             
          
            cout<<"emp_id is:-"<<el.emp_id<<endl;
            cout<<"emp salary is:-"<<el.salary<<endl;
            cout<<"emp age is:-"<<el.age<<endl;
            cout<<"emp name is:-"<<el.name;
}
