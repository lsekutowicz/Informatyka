//Ciąg Fibonacciego
//20.04.2022
#include <iostream>
using namespace std;

void fibo(int n) {
	int f0 = 0;
	int f1 = 1;
	int f = 0;
	for (int i = 0; i < n; i++) {
		if (i > 1);
		f = f0 + f1;
		f0 = f;
		f1 = f;
		cout << f << " ";
	}
}

int main()
{
	int n = 0; //numer liczby ciągu Fibonacciego do wyliczenia
	cout << "Ile wyrazów ciągu wypisać:";
	cin >> n;
	fibo(n);
	return 0;
}
