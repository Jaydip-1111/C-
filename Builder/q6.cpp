#include<iostream>
#include<stdio.h>
using namespace std;
class bill{
           public:
             int item_num,qty,tax,discount;
             char item_name,user_id,password;
             void getData();
             void putData();
             
};
void bill :: getData()
{
            cout<<"Enter User_id";
            cin>>user_id;

            cout<<"Enter Password:-";
            cin>>password;

            cout<<"Enter item_number:-";
            cin>>item_num;

            cout<<"Enter item_name:-";
            cin>>item_name;

            cout<<"Enter Quantity:-";
            cin>>qty;

            cout<<"Enter Tax:-";
            cin>>tax;

            cout<<"Enter Discount:-";
            cin>>discount;
}
void bill :: putData()
{
       
}