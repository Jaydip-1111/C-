#include <iostream>
using namespace std;
int main()
{
    char c;
    int lwr,upr;
    cout << "Enter alphabet:-";
    cin >> c;

    lwr = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upr = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lwr || upr)
    {
        cout << c << " is a vowel.";
    }

    else
    {
        cout << c << " is a consonant.";
    }
}