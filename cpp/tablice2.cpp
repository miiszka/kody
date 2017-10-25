/*
 * tablice.cpp
 */


#include <iostream>

using namespace std;

void pobierzDane(int tab[], int rozmiar)
{
    int i;
    cout << "Podaj " << rozmiar << "liczb: " << endl;
    for (i = 0; i < rozmiar; i++)
    {
        cin >> tab[i];
    }
}

int sumuj (int tab[], int rozmiar)
{
    int i;
    int suma = 0;
    for (i = 0; i < rozmiar; i++)
    {
        cout <<tab[i]<< " ";
        suma += tab[i];
    }
    return suma;
        
}
float liczsrednia(int tab[], int rozmiar)
{
    return sumuj(tab, rozmiar)/float(rozmiar);
}




int main(int argc, char **argv)
{
    //const int rozmiar = 5;
    int rozmiar = 0;
    cout << "Ile ocen: " << endl;
    cin >> rozmiar;
    int liczby[rozmiar];
    
    
    pobierzDane(liczby, rozmiar);
    cout << "Suma ocen: " << sumuj(liczby, rozmiar) << endl;
    cout << "Średnia: " << liczsrednia(liczby, rozmiar) << endl;
    
    
    
       
    
    
    return 0;
}

