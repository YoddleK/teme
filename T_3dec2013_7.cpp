#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
/*
7. Se citesc mai multe numere  intregi atata
timp cat sunt pozitive si au cel putin 5 si cel mult 16 cifre.
*/
{
	int a[9999],i;
	for(i=0;i<10000;i++)
	{
	    cout<<"a["<<i<<"]=";cin>>a[i];
	    int cif=0;
	    while(a[i])
	    {
	        a[i]=a[i]/10;
	        cif++;
	    }
	    if(cif>16)
            break;
        if(cif<5)
            break;
	}
	return 0;
}
