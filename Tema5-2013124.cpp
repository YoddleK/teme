#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;
int main()
/*
5. Se citesc numere atata timp cat sunt mai mari decat 100.
Numarati cate dintre valorile citite sunt numere prime.
*/
{
    int n=INT_MAX;
	int prim=0,a[n],i,c1=0,c=0;
	for(i=0;i<n;i++)
	{
	    cout<<"a["<<i<<"]=";cin>>a[i];
	    if(a[i]<100)
            break;
        else
            c++;
	}

	for(i=0;i<c;i++)
	{
	    if(a[i]<2&&(a[i]%2==0&&a[i]!=2))
	    	prim=0;
	    else
	    	{
	    	prim=1;
	    	for(int div=3;div<sqrt(a[i]);div++)
	    		if(a[i]%div==0)
	    			{
	    			prim=0;
	    			break;
	    			}
                else
                    c1++;
	    	}
	}
	cout<<c;

	return 0;
}
