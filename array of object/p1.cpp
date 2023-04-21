#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
public:
    int roll_no;
    char name[50];
    int m1, m2, m3;
    void getData();
    void putData();
};
void student ::getData()
{
    cout << "Enter Roll_no:-";
    cin >> roll_no;
    cout << "Enter Student Name:-";
    cin >> name;
    cout << "Enter Sub-1 Marks:-";
    cin >> m1;
    cout << "Enter Sub-2 Marks:-";
    cin >> m2;
    cout << "Enter Sub-3 Marks:-";
    cin >> m3;
}
void student ::putData()
{
    cout << roll_no << "\t";
    cout << name << "\t ";
    cout << m1 << "\t" << m2 << "\t" << m3 << endl;
}
int main()
{
    student s1[10];
    int del, n, i, j, count = 0;

    cout << "Enter of student:-";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        s1[i].getData();
    }
    cout << "------ Student Information -------" << endl;
    cout << "rollno\tname\t m1\tm2\tm3" << endl;
    for (i = 0; i < n; i++)
    {
        s1[i].putData();
    }
    cout << "------- End Information -------";
    cout << "\nEnter element to be delete :: ";
    cin >> del;
    for (i = 0; i < n; i++)
    {
        if (i == del)
        {
            for (int j = i; j < (n - 1); j++)
            {
                s1[j] = s1[j + 1];
            }
            count++;
            break;
        }
    }
    cout << "------ After Delete [ Student Information ] -------" << endl;
    cout << "rollno\tname\t m1\tm2\tm3" << endl;
    for (i = 0; i < n - 1; i++)
    {
        s1[i].putData();
    }
    cout << "------- End Information -------";
    return 0;
}
