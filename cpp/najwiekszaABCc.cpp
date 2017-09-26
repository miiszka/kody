
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
    if (a > b) 
    {
        if (a > c)
                    cout << "Najwększe a=" << a;
        else if (c > a)
                    cout << "Największe c=" << c;
        else if (c == a)
                    cout << "Największe c=a=" <<a;
                    
    }
    else if (b > a) 
    {
        if (b > c)
                    cout << "Najwększe b=" << b;
        else if (c > b)
                    cout << "Największe c=" <<c;
        else if (c == b)
                    cout << "Największe b=a=" << a;
    }
    else if (c > a)
    {
        if (c > b)
                    cout << "Największe c=" << c;
        else if (b > c)
                    cout << "Największe b=" << b;
        else if (b == c)
                    cout << "Największe b=c=" <<b;
    }
    else if (a == b)
    {
        if (c == b)
                    cout << "a=b=c" << a;
        
        
        
        
    }
    
    
    
    
	return 0;
}

