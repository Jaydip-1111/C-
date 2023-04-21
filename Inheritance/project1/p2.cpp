#include<iostream>
using namespace std;

class p{
    public:
        float celsius,fahrenheit,kelvin;
};

class q : public p{
    public:
        void toFahrenheit(){
            cout<<"Enter tempreture in celsius : ";
            cin>>celsius;
            fahrenheit = (celsius * 9.0) / 5.0 + 32;
            cout<<"The tempreture in degree fahrenheit : "<<fahrenheit<<endl;
        }
};

class r : public q{
        public:
            void toKelvin(){
                kelvin = 273.5 + ((fahrenheit - 32.0) * (5.0/9.0));
                cout<<"The tempreture in kelvin : "<<kelvin<<endl;
            }
};

int main(){
    r r1;
    r1.toFahrenheit();
    r1.toKelvin();
    return 0;
}