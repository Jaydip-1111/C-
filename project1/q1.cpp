#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;

    cout << "Enter First Value:-";
    cin >> a;

    cout << "Enter Second Value:-";
    cin >> b;

    cout << "Enter any choice operator(+,-,*,/):";
    cin >> c;

    cout << "Select Operator:" << c << endl;

    switch (c)
    {
    case '+':
        cout << "Addition is:-" << a + b;
        break;
    case '-':
        cout << "Subtraction is:- " << a - b;
        break;
    case '*':
        cout << "Multiplication is:- " << a * b;
        break;
    case '/':
        cout << "Division is " << a / b;
        break;

    default:
        cout << "Enter Invalid operation";

        break;
    }
}
