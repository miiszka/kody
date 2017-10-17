/*
 * petlaaaaa.cpp
 */


#include <iostream>

using namespace std; 

int main(int argc, char **argv)
{
	int wynik = 0;
	int liczba = 0;
	
		cout << "Podaj liczbę: " << endl;
		cin >> liczba;
		while (liczba > 0)
	{
		wynik += liczba % 10;
		liczba = liczba / 10;
	}
	cout <<"Suma cyfr podanej liczby: " << wynik << endl;
	return 0;
}

