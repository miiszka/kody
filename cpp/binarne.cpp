/*
 * binarne.cpp
 */

using namespace std;

#include <iostream>

int wyszukaj_liniowo(int l[], int n, int el)
{
	for(int i = 0; i < n; i++)
	{
		if(l[i] == el)
		return i;
	}
	return -1;
}


int main(int argc, char **argv)
{
	int n = 7;
	int el = 3;
	int l[]={9, 8, 7, 6, 5, 4, 3};
	
	cout << wyszukaj_liniowo(l, n, el) << endl;
	
	return 0;
}

