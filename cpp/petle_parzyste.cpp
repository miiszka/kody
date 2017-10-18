/*
 * petle_parzyste.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int m, n;
    
    
    cout << "Podaj zakres <m, n>: "<< endl;
    cin >> m >> n;
    while (m%3 == 0)
    {
        cout << m << endl;
}
    else if ((m+1)%3 = 0)
    {
        cout << m+1 << endl;
    }
    else if ((m+2)%3 == 0)
    {
        cout << m+2 << endl;
    }
    
    
    return 0;
}

