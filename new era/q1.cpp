#include<iostream>
#include<stdio.h>
using namespace std;
class cls_distance{
                public:
                        int feet1,feet2;
                        float inch1,inch2;
                        int  sum_feet,sum_inch;

                        void getData()
                        {
                            cout<<"Enter feet1:-";
                            cin>>feet1;

                            cout<<"enter inch1:-";
                            cin>>inch1;

                            cout<<"enter feet1:-";
                            cin>>feet2;

                            cout<<"enter inch2:-";
                            cin>>inch2;
                        }     
                        void putData();
                    
};
void cls_distance :: putData()
                    {

                        
                       sum_feet = feet1 + feet2;
                       sum_inch = inch1 + inch2;

                       while(sum_inch >= 12)
                       {
                          sum_inch = sum_inch -12;
                          sum_feet++;
                       }
                      cout<<"feet is:-"<<sum_feet<<endl;
                      cout<<"inch is:-"<<sum_inch<<endl;
                    
 }


int main(){
             cls_distance d1;
             d1.getData();
             d1.putData();

}