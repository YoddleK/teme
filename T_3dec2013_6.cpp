#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
/*
6. Se citeste n iar apoi n numere intregi, afisati
 suma tuturor numerelor pozitive citite care sunt si numere prime.
*/
{
	int a[1000],n,i,S=0,prim;
	cout<<"n= ";cin>>n;
	for(i=0;i<n;i++)
	{
	    cout<<"a["<<i<<"]=";cin>>a[i];
	}
    for(i=0;i<n;i++)
	{
	    if(a[i]>0)
            {
            if(a[i]<2&&(a[i]%2==0&&a[i]!=2))
                S=S;
            else
                {
                for(int div=3;div<sqrt(a[i]);div++)
                    if(a[i]%div==0)
                        {S=S;break;}
                    else
                        S=S+a[i];
                }
            }
	}
    cout<<"Suma numerelor prime pozitive din sir este "<<S;
	return 0;
}
