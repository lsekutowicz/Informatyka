//Szyfrowanie cezara
//30.03.2022 & 06.04.2022
#include <iostream>
using namespace std;

void szyfruj(int klucz, char tab[]);

int main()
{
	char tab[1001];
	int klucz;

	cout << "Podaj wyraz skladający się z małych liter: ";
	cin >> tab;

	cout << "Podaj klucz z przedziału [-26..26]: ";
	cin >> klucz;

	szyfruj(klucz, tab);

	cout << "Po zaszyfrowaniu " << tab << endl;

	szyfruj(-klucz, tab);

	cout << "Po rozszyfrowaniu: " << tab << endl;

	return 0;
}

void szyfruj(int klucz, char tab[]) {
	int dl = strlen(tab);
	if (!(klucz >= -26 && klucz <= 26)) {
		return;
	}
	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'z') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else{
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
}