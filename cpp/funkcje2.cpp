/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

//int liczba = 0; // zmienna globalna
//int krok = 0;


//~void zwieksz1()
//~{
    //~liczba += krok;
//~}

void zwieksz2(int liczba, int krok) // przekazywanie przez wartość
{
    cout << &liczba << " " << &krok << endl;
    liczba += krok;
    cout << "Liczba: " << liczba << endl;
}
void zwieksz3(int &liczba, int &krok) // przekazywanie przez wartość
{
    liczba += krok;
    cout << "Liczba: " << liczba << endl;
}

int main(int argc, char **argv)
{
    int liczba = 0; //zmienna lokalna
    int krok = 0;
    cout << "Podaj liczbę i krok: " << endl;
    cin >> liczba >> krok;
    
    cout << &liczba << " " << &krok << endl;
    
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    
    cout << "Liczba: " << liczba << endl;
    cout << "Krok: " << krok << endl;
    
    return 0;
}

