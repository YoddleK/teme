#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int x,prim,div;
    cout<<"introduceti numarul:";cin>>x;
    if(x<=19)
        {
        if(x<2&&(x%2==0&&x!=2))
            prim=0;
        else		//prim=0=nonprim prim=1=prim
            {
            prim=1;
            for(div=3;div<sqrt(x);div=div+2)
                if(x%div==0)
                    {prim=0;break;}
            }
        if(prim==1)
            cout<<x<<" este prim.";
        else
            cout<<x<<" nu este prim.";
        }
    else
        cout<<"Numarul este prea lung.";
    return 0;
}
