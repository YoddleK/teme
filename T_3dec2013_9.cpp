#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
/*
10. Verificati daca inversul unui numar x, este prim.
*/
{
	int n,n1,inv=0,uc,prim;
	cout<<"Numarul este: ";cin>>n;
    while(n)
	{
	    inv=inv*10+n%10;
	    n=n/10;
	}
	if(inv<2&&(inv%2==0&&inv!=2))
		prim=0;
	else
		{
		prim=1;
		for(int div=3;div<sqrt(inv);div+=2)
			if(inv%div==0)
				{
				cout<<"Numarul nu este prim.";
				break;
				}
            else
                cout<< "Numarul este prim.";
		}

	return 0;
}
