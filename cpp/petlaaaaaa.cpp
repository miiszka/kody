/*
 * petlaaaaaa.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int wynik = 0;
	int liczba = 0;
		
		cout << "Podaj liczbę: " << endl;
		cin >> liczba;
	while (1)
	{
		while (liczba != 0)
	{
		wynik += liczba%10;
		liczba = liczba/10;
	}
			cout << "Suma cyfr podanej liczby = " << wynik << endl;
		if (wynik > 0 && wynik < 10)
	{
		break;
	}
		else
		{
			liczba += wynik;
			wynik = 0;
		}
	}

	return 0;
}

