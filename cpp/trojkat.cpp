/*
 * trojkat.cpp
 * Program pobiera trzy boki trójkąta
 * Sprawdza, czy da się z nich zbudować trójkąt
 * oblicza obwód i pole (ze wzoru Herona)
 * i drukuje na ekranie odpowiedni komunikat
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    float p;
    float pole;
        cout << "Podaj długości boków: ";
        cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "obwód = " << a + b + c << endl;
        cout << "pole = " << 
        
        
    }
        



	
	return 0;
}

