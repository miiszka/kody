/*
 * rekurencja6.cpp
 */

using namespace std;

#include <iostream>

int dzielnik(int a, int b)
{
    if (b == 0)
    return a;
    return dzielnik(b, a%b);
}


int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    cout << "Podaj liczbę: " << endl;
    cin >> a;
    cout << "Podaj liczbę: " << endl;
    cin >> b;
    cout << "Największy wspólny dzielnik: " << dzielnik(a, b) << endl;
	
	return 0;
}

