/*
 * rekurencja5.cpp
 */

using namespace std;

#include <iostream>

int kwadrat(int podst[], int wykladnik)
{
    wykladnik = 2;
    if (podst[0])
    return 0;
    return kwadrat(podst, wykladnik) * podst;
}

int main(int argc, char **argv)
{
    int podst[];
    int wykladnik = 2;
	cout << "Podaj wyraz ciągu: " << endl;
    cin >> podst[i];
    cout << "Kwadrat: " << kwadrat(podst[i], wykladnik) << endl;
	return 0;
}

