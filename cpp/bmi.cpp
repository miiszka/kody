/*
 * bmi.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float wzrost = 0;
    float masa = 0;
    
    cout << "Podaj wzrost i masę ciała: " << endl;
    cin >> wzrost >> masa;
    
    if (masa/(wzrost*wzrost) < 18.5 )
    {
        cout << "niedowaga" << endl;
    }
    if  (masa/(wzrost*wzrost) < 24.9 && masa/(wzrost*wzrost) > 18.5)
    {
        cout << "norma" << endl;
    }
    if (masa/(wzrost*wzrost) >= 25 && masa/(wzrost*wzrost) < 30)
    {
        cout << "nadwaga" << endl;
    }
    if (masa/(wzrost*wzrost) >= 30)
    {
        cout << "otyłość" << endl;
    }
    
    
	return 0;
}

