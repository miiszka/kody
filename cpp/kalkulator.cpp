/*
 * kalkulator.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znak; // +, -, *, /
    znak = +, -, *, /
    int a, b;
    a = b = 0;
    cout << "Podaj znak: " << endl;
    cin >> znak;
    cout << "Podaj liczby: " << endl;
    cin >> a >> b;
    if (znak == '+')
    {
        cout << a + b << endl;
    }
    if (znak == '-')
    {
        cout << a - b << endl;
    }
    if (znak == '*')
    {
        cout << a*b << endl;
    }
    if (znak == '/')
    {
        cout << a/b << endl;
    }
        
        

    return 0;
}

