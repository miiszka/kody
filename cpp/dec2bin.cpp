/*
 * dec2bin.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znakA='A';
    char znakB = 'B';
    cout << (int)znakA << (int)znakB << endl;
    cout << (char)15 << (char)16 << endl;
    // dane wejściowe
    int reszty[16];
	int liczba = 0;
    // 120 - 64 = 56
    // 64 - 32 = 24
    // 24 - 16 = 8
    // 8 - 8 = 0
    // 1111000
    int podstawa = 0;
    cout << "Podaj liczbę i podstawę: ";
    cin >> liczba >> podstawa;
    // algorytm
    int i = 0; // indeks tabeli 
    do{  // pętla wykona się chociaż raz
        reszty[i] = liczba % podstawa;
        liczba = liczba / podstawa;
        i++;
    } while(liczba > 0);
	
    // for(int j = i - 1; j >= 0 ; j--){
    //    cout << reszty[j];
    // }
    
    while(i-1 >= 0){
        i--;
        cout << reszty[i];
    }
    
    return 0;
}

