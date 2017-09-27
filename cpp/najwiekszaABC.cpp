
	/*
 * najwieksza.cpp
 * Pobierz trzy liczby całkowite od użytkownika i wydrukuj największą
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int a, b, c;
    a = b = c = 0;
    cout << "Podaj 3 liczby: ";
    cin >> a >> b >> c;
    if (a > b &&  a > c) 
    {
        cout << "Najwększe a=" << a;
    }
    if (b > a && b > c) 
    {
        cout << "Najwększe b=" << b;
    }
    if (c > a && c > b)
    {
        cout << "Największe c=" << c;
    }
    if (a == b && a > c)
    {
        cout << "Największe a=b=" << a;
        
    }
    if (a == c && a > b)
    {
        cout << "Największe a=c=" << a;
        
    }
    if (c == b && b > a)
    {
        cout << "Największe c=b=" << b;
        
    }
    if (a == b && a == c)
    {
        cout << "Liczby równe";
    }
    
    
	return 0;
}

