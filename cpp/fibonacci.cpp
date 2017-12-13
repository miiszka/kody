/*
 * fibonacci.cpp
 */


#include <iostream>

using namespace std;

int fib_rek(int n)
{
    if (n == 1)
    return 1;
    return fib_rek(n - 2) + (n - 1);
    
}


int fib_iter(int n)
{
    int a = 0;
    int b = 1;
    int i = 0;
    
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    cout << a;
    for (i = 2; i < n; i++)
    {
        int tmp;
        tmp = b;
        b = a + b;
        a = tmp;
    }
    cout<< "Wyraz: " << i <<  ": " << b << endl << "Iloraz: " << b / a<<endl;
    return b;
}

int main(int argc, char **argv)
{
	
    int n = 5;
    cout<<fib_iter(n);
    
	return 0;
}

