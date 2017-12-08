/*
 * Papka_dzielniki.cpp
 */


#include <iostream>

using namespace std;

int dzielniki(int a)
{
    int ile_dziel = 0;
    for (int i = 1; i<=a; i++)
    {
        if (a%i == 0)
        {
            ile_dziel++;
        }
    }
    return ile_dziel;
}

int main(int argc, char **argv)
{
	int a = 0;
    
    cout << "Podaj liczbę: ";
    cin >> a;
    
    cout << "Ilość dzielników liczby " << a << " jest równa: " << dzielniki(a);
    
	return 0;
}

