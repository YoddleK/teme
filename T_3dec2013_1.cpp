#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x, c = 0, x1, prim, div;
	cout << "introduceti numarul:";
	cin >> x;
	x = x1;

	while (x1) {
		x1 = x1 / 10;
		c++;
	}

	if (c > 19) {
		cout << "Numarul are mai mult de 19 cifre.";
		cout << endl;
	} else {
		if (x < 2 || (x % 2 == 0 && x != 2)) {
			prim = 0;
		} else {
			prim = 1;
			for (int div = 3; div < sqrt(x); div = div + 2)
				if (x % div == 0) {
					prim = 0;
					break;
				}
		}

		if (prim == 1)
			cout << "Numarul este prim.";
		else
			cout << "Numarul nu este prim.";
	}

	return 0;
}
