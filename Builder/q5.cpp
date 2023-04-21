#include <iostream>
#include <stdio.h>
using namespace std;
class railway
{
public:
    int train_no;
    char train_name[100];
    char source[100];
    char destination[50];
    char train_time[50];
    void getData();
    void putData();
};
void railway ::getData()
{
    cout << "Enter Train Number:-";
    cin >> train_no;

    cout << "Enter Train Name:-";
    cin >> train_name;

    cout << "Enter source:-";
    cin >> source;

    cout << "Enter Destination:-";
    cin >> destination;

    cout << "Enter Train Time:-";
    cin >> train_time;
}
void railway ::putData()
{
    cout << train_no << "\t";
    cout << "\t" << train_name << "\t";
    cout << "\t" << source << "\t";
    cout << "\t" << destination << "\t";
    cout << "\t" << train_time << "\t" << endl;
}
int main()
{
    railway r1[10];
    int n, i, search_tnum;
    cout << "Enter of Train:-";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        r1[i].getData();
    }
    cout << "-------Train Information -------" << endl;
    cout << "train_no\ttrain_name\ttrain_source\tdestination\ttrain_time" << endl;
    for (i = 0; i < n; i++)
    {
        r1[i].putData();
    }
    cout << "-----End Information-----" << endl;
    while (1)
    {
        cout << "To Exit Press [0]" << endl;
        cout << "Search Train By Number :" << endl;
        cin >> search_tnum;
        if (search_tnum == 0)
        {
            break;
        }
        cout << "-------Search Train Information -------" << endl;
        cout << "train_no\ttrain_name\ttrain_source\tdestination\ttrain_time" << endl;
        for (i = 0; i < n; i++)
        {
            if (r1[i].train_no == search_tnum)
            {
                r1[i].putData();
            }
        }
        cout << "-----End Information-----" << endl;
    }

    return 0;
}
