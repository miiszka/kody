/*
 * petlaaa.cpp
 */


#include <iostream>
#include <cmath> 

using namespace std;

int main(int argc, char **argv)
{
        int a, b, c;
        int obwod = 0;
        float p = 0;
        a = b = c = 0;
        
            cout << "Podaj długości boków: " << endl;
            cin >> a >> b >> c;
        while  (a + b > c || a + c > b || b + c > a)
        {
            obwod = a + b + c;
            p = 0.5 * obwod;
            cout << "Pole: " << sqrt (p*(p - a)*(p - b)*(p - c)) << endl;
        }
    
    




	
	return 0;
}

