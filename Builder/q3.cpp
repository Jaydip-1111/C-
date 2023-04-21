#include<iostream>
#include<stdio.h>
using namespace std;
class highschool{
             public:
                  int stud_id,stud_roll_no,stud_age,stud_contact;
                  string stud_name;
                  string stud_address;
            public:
                 static int stu_standard;
                 static string stud_edu_institute;
                 int getId(){
                     return this->stud_id;
                 }
                 string getName(){
                     return this->stud_name;
                 }
                 int getRoll_no(){
                     return stu_standard;
                 }
                 int getAge(){
                     return this->stud_age;
                 }
                 int getcon(){
                    return this->stud_contact;
                 }
                 string getedu(){
                    return this->stud_edu_institute;
                 }
                 int getstadard(){
                       return stu_standard;
                 }
                 string getadd(){
                      return stud_address;
                 }
                 void setData(int a,string b,int c,int d,int f,string h){
                    stud_id=a;
                    stud_name =b;
                    stud_roll_no =c;
                    stud_age = d;
                    stud_contact = f;
                    stud_address = h;
                 }
};
int highschool :: stu_standard=10;
string highschool :: stud_edu_institute="primary school";

class college{
             public:
             int stud_id;
             string stud_name;
             int stud_roll_no;
             static int stu_standard;
             int stud_age;
             int stud_contact;
             static string stud_institute;
             string stud_address;
         
         int get_id(){
                return this->stud_id;
         }
         string get_name(){
                return this->stud_name;
         }
         int getroll_no(){
               return stud_roll_no;
         }
         int get_age(){
               return this->stud_age;
         }
         int getstud_contact(){
              return this->stud_contact;
         }
         int getstadard(){
              return stu_standard;
         }
         string getedu(){
             return stud_institute;
         }
         string getaddress(){
             return stud_address;
         }
         void setdata(int a,string b,int c,int e,int f,string h)
         {
             stud_id=a;
             stud_name=b;
             stud_roll_no=c;
             stud_age=e;
             stud_contact=f;
             stud_address=h;
         }

};
