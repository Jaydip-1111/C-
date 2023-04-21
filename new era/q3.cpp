#include<iostream>
#include<stdio.h>
using namespace std;
class cls_time{
                 public:
                        int sec,hours = 0, minute = 0;
                        void getDate()
                        {
                          cin>>sec;
                        }
                        void putData()
                        {
                          while(sec >= 3600)
                          {
                            sec = sec -3600;
                            hours++;
                          }
                          while(sec >=60)
                          {
                            sec = sec - 60;
                            minute++;
                          }
                          cout<<"the time is :"<< hours <<":"<< minute <<":"<<sec;
                        }

};
int main()
{
    cls_time t1;

    cout<<"Enter the in Seconds :-";
    t1.getDate();
    t1.putData();
  
}

