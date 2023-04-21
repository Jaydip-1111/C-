#include <iostream>
using namespace std;
class parth
{
public:
    int hours1, hours2, second1, second2, min1, min2;
    int sum_t, sum_s, sum_m;

    void getdata()
    {
        cout << "Enter Hour-1 : ";
        cin >> hours1;
        cout << "Enter Minite-1 : ";
        cin >> min1;
        cout << "Enter Second-1 : ";
        cin >> second1;

        cout << "Enter Hour-2 : ";
        cin >> hours2;
        cout << "Enter Minite-2 : ";
        cin >> min2;
        cout << "Enter Second-2 : ";
        cin >> second2;
    }
    void putdata();
};

void parth::putdata()
{
    sum_t = hours1 + hours2;
    sum_m = min1 + min2;
    sum_s = second1 + second2;

    while (sum_s >= 3600)
    {
        sum_s = sum_s - 3600;
        sum_t++;
    }
    while (sum_s>= 60)
        {
            sum_s = sum_s - 60;
            sum_m++;
        }
    while (sum_m>= 60)
        {
            sum_m = sum_m - 60;
            sum_t++;
        }

    cout << "Hour is : " << sum_t << endl;
    cout << "Miniutes is : " << sum_m << endl;
    cout << "Second is : " << sum_s << endl;
}

int main()
{
    parth p1;
    p1.getdata();
    p1.putdata();
}