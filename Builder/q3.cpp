#include<iostream>
#include<string>
using namespace std;
class Highschool{
    public :
        int stud_id;
        int stud_roll_no;
        int stu_age;
        string stud_name;
        double stu_contact;
        string stu_address;
    public:
        static int stu_standard;
        static string stu_edu_institude;
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
            return this->stu_age;
        }
        double getStud_contact(){
            return this->stu_contact;
        }
        string getEducation(){
            return stu_edu_institude;
        }
        int getStadard(){
            return stu_standard;
        }
        string getAddress(){
            return stu_address;
        }
        void setdata(int i,string n,int r,int a,double c,string A){
            stud_id=i;
            stud_name=n;
            stud_roll_no=r;
            stu_age=a;
            stu_contact=c;
            stu_address=A;
        }
};

int Highschool :: stu_standard=12;
string Highschool :: stu_edu_institude="K n shah modasa high School";

class College{
    public :
        int stud_id;
        string stud_name;
        int stud_roll_no;
        static int stu_standard;
        int stu_age;
        double stu_contact;
        static string stu_edu_institude;
        string stu_address;
    int getId(){
        return this->stud_id;
    }
    string getName(){
        return this->stud_name;
    }
    int getRoll_no(){
        return stud_roll_no;
    }
    int getAge(){
        return this->stu_age;
    }
    double getStud_contact(){
        return this->stu_contact;
    }
    int getStadard(){
        return stu_standard;
    }
    string getEducation(){
        return stu_edu_institude;
    }
    string getAddress(){
        return stu_address;
    }
    void setdata(int i,string n,int r,int a,double c,string A )
    {
        stud_id=i;
        stud_name=n;
        stud_roll_no=r;
        stu_age=a;
        stu_contact=c;
        stu_address=A;
    }
};
int College :: stu_standard=2;
string College :: stu_edu_institude="swarnim University";

int main(){
    Highschool h1[30];
    College c1[30];
    int stud_id;
    string stud_name;
    int stud_roll_no;
    int stu_age;
    double stu_contact;
    string stu_address;
    
    cout<<"------Enter Highschool student information------"<<endl;
    
    for(int i=0;i<2;i++){
    cout<<"Enter the Student id :-";
    cin>>stud_id;
    cout<<"Enter the Student Name :-";
    cin>>stud_name;
    cout<<"Enter the Roll Number :-";
    cin>>stud_roll_no;
    cout<<"\nEnter the student Age :-";
    cin>>stu_age;
    cout<<"\nEnter the Student Contanct :-";
    cin>>stu_contact;
    cout<<"\nEnter the student Address :-";
    cin>>stu_address;
    h1[i].setdata(stud_id,stud_name,stud_roll_no,stu_age,stu_contact,stu_address);
    }
    
    cout<<"------Enter Collage student information------"<<endl;    
    for(int i=0;i<2;i++){
    cout<<"Enter the Student id : "<<endl;
    cin>>stud_id;
    cout<<"Enter the Student Name : "<<endl;
    cin>>stud_name;
    cout<<"Enter the Roll Number : "<<endl;
    cin>>stud_roll_no;
    cout<<"Enter the student age : "<<endl;
    cin>>stu_age;
    cout<<"Enter the Student Contanct : "<<endl;
    cin>>stu_contact;
    cout<<"Enter the student Address :"<<endl;
    cin>>stu_address;
    c1[i].setdata(stud_id,stud_name,stud_roll_no,stu_age,stu_contact,stu_address);
    }
    
    cout<<"------High School Student Details------:-"<<endl;
    
    for(int i=0;i<2;i++){
    cout<<"Student id is :"<<h1[i].getId()<<endl;
    cout<<"Student Name is :"<<h1[i].getName()<<endl;
    cout<<"Student Roll Number is :"<<h1[i].getRoll_no()<<endl;
    cout<<"Student standard is :"<<h1[i].getStadard()<<endl;
    cout<<"Student age is:"<<h1[i].getAge()<<endl;
    cout<<"Student Contact is :"<<h1[i].getId()<<endl;
    cout<<"Student School Name is :"<<h1[i].getEducation()<<endl;
    cout<<"Student Student Address is :"<<h1[i].getAddress()<<endl;
    cout<<"______________"<<endl;
    }
    
    cout<<"\nCollege Student Details :- "<<endl;
    
    for(int i=0;i<2;i++){
    cout<<"Student id is :"<<c1[i].getId()<<endl;
    cout<<"Student Name is:"<<c1[i].getName()<<endl;
    cout<<"Student Roll Number is :"<<c1[i].getRoll_no()<<endl;
    cout<<"Student standard is :"<<c1[i].getStadard()<<endl;
    cout<<"Student age is :"<<c1[i].getAge()<<endl;
    cout<<"Student Contact is :"<<c1[i].getId()<<endl;
    cout<<"Student School Name is :"<<c1[i].getEducation()<<endl;
    cout<<"Student Student Address is:"<<c1[i].getAddress()<<endl;
    cout<<"______________"<<endl;
    }
}
