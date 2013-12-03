
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n,div,a[100],i,prim;
    cout<<"Trebuie afisate numerele prime pana la ";cin>>n;
    for(i=0;i<n;i++)
        a[i]=i+1;
    for(i=0;i<n;i++)
    {
        {
        if(a[i]<2&&(a[i]%2==0&&a[i]!=2))
            prim=0;
        else		//prim=0=nonprim prim=1=prim
            {
            prim=1;
            for(div=3;i<=sqrt(a[i]);div=div+2)
                if(a[i]%div==0)
                    {
                    prim=0;break;
                    }
                else
                    prim=1;
            }
         if(prim==1)
            cout<<a[i]<<" ";
        }
    }
	return 0;
}
