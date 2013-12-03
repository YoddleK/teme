#include <iostream>
#include <math.h>

using namespace std;
//5. Se citesc numere atata timp cat sunt mai mari decat 100.
//Numarati cate dintre valorile citite sunt numere prime.

int main (int argc, char* argv[])
{
    const int N = 5;
    int a[N] = {131, 111, 171, 200, 101};
    int count = 0, n;

    for(n = 0; n < N; n++) {
        cout << "a[" << n << "]="; cin >> a[n];
        if(a[n] < 100)
            break;
    }

    for(int i=0; i < n; i++) {

         if(a[i] % 2 == 0) {
            continue;
        }

        for(int div = 3; div < sqrt(a[i]); div += 2) {
        	if(a[i] % div == 0) {
                goto flag;
        	}
        }

        count ++;
        flag: continue;
    }

    cout << ">> count = " << count << endl;
}
