/*
 * kalkulator.cpp
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
<<<<<<< HEAD
    char znak; // + , - , * , /
    znak = + , -, *, /
=======
    char znak;// +, -, *, /
>>>>>>> 28cdba8cddea7e2e6fb2a5bb9080d51bdaa89057
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

