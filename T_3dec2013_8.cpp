#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
/*
8. Afisati toate numerele prime care au exact 5 cifre..
*/
{
	int a[9999],i,b[9999];
	for(i=0;i<10000;i++)
	{
	    cout<<"a["<<i<<"]=";cin>>a[i];
	    if(a[i]==0)
            break;
	}
	for(i=0;i<10000;i++)
	{
	    a[i]=b[i];
	    int cif=0;
	    while(a[i])
	    {
	        a[i]=a[i]/10;
	        cif++;
	    }
	    if(cif==5)
            cout<<b[i]<<" ";
        continue;
	}
	return 0;
}
