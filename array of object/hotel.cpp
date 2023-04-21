#include<iostream>
#include<stdio.h>
using namespace std;
class hotel
{
                public:
                int hotel_id,staff_qty,room_qty,hotel_year;
                char hotel_name[50],hotel_type[20],hotel_rating[10],location[20];
                void getData();
                void putData();
};
void hotel :: getData()
{
                cout<<"Enter Hotel_id:-";
                cin>>hotel_id;

                cout<<"Enter Hotel_name:-";
                cin>>hotel_name;

                cout<<"Enter Hotel_type:-";
                cin>>hotel_type;

                cout<<"Enter Hotel_Rating:-";
                cin>>hotel_rating;

                cout<<"Enter Hotel_location:-";
                cin>>location;

                cout<<"Enter Hotel_establish_year:-";
                cin>>hotel_year;

                cout<<"Enter Hotel_staff_qty:-";
                cin>>staff_qty;

                cout<<"Enter Hotel_Room_qty:-";
                cin>>room_qty;
}
void hotel :: putData()
{
              cout<<hotel_id<<"\t\t";
              cout<<hotel_name<<"\t\t";
              cout<<hotel_type<<"\t\t";
              cout<<hotel_rating<<"\t\t";
              cout<<location<<"\t\t";
              cout<<hotel_year<<"\t\t";
              cout<<staff_qty<<"\t\t";
              cout<<room_qty<<"\t\t"<<endl;
}
int main(){
             hotel h1[20];
             int n,i;

             cout<<"Enter of Hotel:-";
             cin>>n;

            for(i=0; i<n; i++)
            {
                h1[i].getData();
                
            }
            cout<<"------ Hotel Information -------"<<endl;
            cout<<"hotel_id\thotel_name\thotel_type\thotel_rating\thotel_location\thotel_year\thotel_staff_qty\thotel_room_qty"<<endl;
            for(i=0; i<n; i++)
            {
                h1[i].putData();
            }
            cout<<"------- End Information -------";
            return 0;
}

