#include <iostream>

using namespace std;

void diapazon(int* a, const int n) {
	for (int i = 0; i < n;i++) {
		a[i] = -40 + rand() % (60);
		cout << a[i] << " ";
	}
}
void poshuk(int* a, const int n, int &S, int &q) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			S += a[i];
			a[i] = 0;
			q += 1;
		}
		else if (a[i]%2 == 0 ) {
			S += a[i];
			a[i] = 0;
			q += 1;
		}
	}
}

void vuvid(int* a, int S, int q, int n) {
	cout << endl << "Suma = " << S << endl;
	cout << "Kilkist  = " << q << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	srand((unsigned)time(NULL));
	const int n = 26;
	int a[n];
	int S = 0, q = 0;

	diapazon(a, n);
	poshuk(a, n, S, q);
	vuvid(a, S, q, n);

	return 0;
}