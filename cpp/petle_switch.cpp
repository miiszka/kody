/*
 * petle_switch.cpp
 * Program pobiera numer miesiąca i wyswietla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int m = 0;
    //while (true) {
    
        //cout << "Podaj miesiąc: " << endl;
        //cin >> m;
        //if (m < 13 && m > 0)
            //break;
    //};
    
    //petla zaporowa
    while (m > 12 || m < 1) {
    
        cout << "Podaj miesiąc (1-12): " << endl;
        cin >> m;
    };

    //if (m == 1)
        //cout << "Styczeń" << endl;
    //else if (m == 2)
        //cout << "Luty" << endl;
        
    switch(m) 
    {
        case 1:
            cout << "Styczeń";
        break;
                case 2:
            cout << "Luty";
        break;
                case 3:
            cout << "Marzec";
        break;
                case 4:
            cout << "Kwiecień";
        break;
        
    }
    
    return 0;
}

