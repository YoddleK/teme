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

    for(n = 0; i < N; n++) {
        cout << "a[" << n << "]="; cin >> a[n];
        if(a[n] < 100)
            break;
    }

    for(int i=0; i < n; i++) {
        cout << "\t>> A " << a[i] << endl;

        if(a[i] % 2 == 0) {
            cout << "modulo 2\n";
            continue;
        }

        int flag = 0;
        for(int div = 3; div < sqrt(a[i]) && !flag; div += 2) {
            cout << ", " << div;
        	if(a[i] % div == 0) {
                cout << "\n modulo " << div << endl;
                flag = 1;
        	}
        }
        if(flag) continue;

        count ++;
    }

    cout << ">> count = " << count << endl;

}
