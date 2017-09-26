/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int bok = 0;
    
	cout <<"Podaj bok kwadratu" << endl;
	cin >> bok;
    cout << "Obwód: " << 4 * bok << endl;
    cout << "pole kwadratu: " << bok * bok << endl;
	return 0;
}

