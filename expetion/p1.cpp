#include<iostream>
using namespace std;
int main(){
         int age = 0;
         try{
              if(age == 0)
              {
                throw 'z';
              }
              else if(age < 18){
                 throw (age);
              }
              else {
                   cout<<"eligible for vote";
              }
         } 
         catch(int str){
                 cout<<"your age is "<<str;
         }  
         catch(char c)
         {
            cout<<"your entered zero..."<<c;
         }
         catch(...){
                cout<<"default catch block";
         }
         return 0;
}