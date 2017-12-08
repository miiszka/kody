/*
 * Papka_Michalina_petla2.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n=0;
    int m=0;
    
    cout << "Podaj szerokość: " << endl;
    cin >> n;
    cout << "Podaj wysokość: " << endl;
    cin >> m;
    
    int i = 0;
    
    if (i > n)
    {
        cout << "Nie istnieje taki prostokąt" << endl;
    }
    else
    {
        while(i != m)
        {
            cout << "*";
            i+=1;
        }
        cout << "*" << endl;
        
        int j=1;
        while(j > m)
        {
            cout << "*";
            int k = 1;
            while (k != m-2)
            {
                cout << "#";
                k+=2;
            }
            cout << "*" << endl;
        }
    }
	
	return 0;
}

