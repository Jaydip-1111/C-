#include<iostream>
using namespace std;
class hotel
{
             private:
             int hotel_id;
             int staff_size;
             int room_size;
             int year;
             char hotel_name[50];
             char hotel_type[50];
             char rating_type[50];
             char address[50];
             char website[50];

            public:
            void getData(){
            
             cout<<"Enter Hotel_id:-";
             cin>>this->hotel_id;

             cout<<"Enter Hotel_name:-";
             cin>>this->hotel_name;

             cout<<"Enter Hotel_type:-";
             cin>>this->hotel_type;

             cout<<"Enter Hotel Staff_size:-";
             cin>>this->staff_size;

             cout<<"Enter Hotel Room_size:-";
             cin>>this->room_size;

             cout<<"Enter Hotel Estblish Year:-";
             cin>>this->year;

             cout<<"Enter Hotel_Address:-";
             cin>>this->address;

             cout<<"Enter Hotel Rating_type:-";
             cin>>this->rating_type;

             cout<<"Enter Website:-";
             cin>>website;
   }
        void  putData()
      {
               cout<<"Hotel_is:-"<<hotel_id<<endl;
               cout<<"Hotel Name is:-"<<hotel_name<<endl;
               cout<<"Hotel_type is:-"<<hotel_type<<endl;;
               cout<<"Hotel Staff_size is:-"<<staff_size<<endl;
               cout<<"Hotel Rooom_size is:-"<<room_size<<endl;;
               cout<<"Hotel Estiblish_year is:-"<<year<<endl;
               cout<<"Hotel Address is:-"<<address<<endl;
               cout<<"Hotel Rating_type is:-"<<rating_type<<endl;
               cout<<"Hotel Website is:-"<<website<<endl;
      }
};
int main(){
         hotel h1;
         h1.getData();
         h1.putData();
         return 0;
}