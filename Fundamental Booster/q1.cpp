#include<iostream>
using namespace std;
int main(){
            char name[20];
            int i,status=0;
            cout <<"Enter name:-";
            cin >> name;

            for(i=0;name[i]!='\0';i++)
            {
               if(name[i] >='0' && name[i]<='9')
               {
                 status =1;
                 break;
               }
            }
            if(status == 0)
            {
               cout<<"string is alphabetic"<<endl;
            }
            else{
               cout<<"string is numeric"<<endl;
            }
            return 0;
}