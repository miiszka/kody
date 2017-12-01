/*
 * horner.cpp
 */


#include <iostream>

using namespace std;

// W(x) = 2x^3 + 3x^2 + 5x + 4 (8)
// W(x) = x(2x^2 + 3x + 5) + 4
// w(x) = x(x(2x + 3) + 5) + 4 (3)

float horner_it(float x, float wsp[], int st)
{
    float wynik = wsp[0];
    for (int i = 1; i < st + 1; i++)
    {
        wynik = wynik * x + wsp[i];
    }
    return wynik;
}




int main(int argc, char **argv)
{
    float x;
    float wsp[4];
    int st = 3;
    
    cout << "Podaj argument: "; cin >> x;
    
    for(int i = 0; i < 4; i++)
    {
    cout << "Podaj współczynnik: "<< endl;
	cin >> wsp[i];
}
    cout << "wartoś wielomianu: " << horner_it(st, wsp, x) << endl;
	return 0;
}

