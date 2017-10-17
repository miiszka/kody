/*
 * petle_switch.cpp
 * Program pobiera numer miesiąca i wyswietla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char zn='t';
   
    while (zn == 't' || zn == 'T' || zn == 'n' || zn == 'N') 
    {
        cout << "Podaj znak: " << endl;
        cin >> zn;
        cout << zn << endl;

            
            }
    

   
    
    return 0;
}

