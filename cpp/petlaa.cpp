/*
 * petlaa.cpp
 */


#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char **argv)
{
    int a = 0;
    for (;;)
	{
        cout << "Podaj liczbę: " << endl;
        cin >> a;
        if (a < 0) break;
        cout << "Kwadrat: " << a * a << endl;
        cout << "Pierwiastek: " << sqrt(a) << endl;
    }
	return 0;
}

