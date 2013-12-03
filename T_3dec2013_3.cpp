#include <math.h>
#include <iostream>
using namespace std;
int main (int argc, char* argv[])
//4. Se citeste un numar natural verificati daca suma cifrelor sale este un numar prim
{
    int n,S=0,prim,rest,div,n1,S1;
    cout<<"Introduceti numarul:";cin>>n;
    n=n1;
    while(n!=0)
    {
        rest=n%10;
        S=S+rest;
        n=n/10;
    }
    {
    if(S<2&&(S%2==0&&S!=2))
    	prim=0;
    else		//prim=0=nonprim prim=1=prim
    	{
    	prim=1;
    	for(div=3;div<sqrt(S);div=div+2)
    		if(S%div==0)
    			{
                prim=0;
    			break;
    			}
    	}
    if(prim==1)
        cout<<"Suma cifrelor numarului "<<n1<<" este un numar prim.";
    else
        cout<<"Suma cifrelor numarului "<<n1<<" nu este un numar prim.";
    }
	return 0;
}

