//Wyszukiwane binarne
//08.05.2022
#include <iostream>
using namespace std;

int wyszukiwaniebinarne(int sz)
{
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int l = 0; // przechowywanie numeru lewego krańca tablicy
    int p = 15; // pechowywanie numeru prawego końca tablicy
    int sr = (l+p)/2; // przechowywanie numeru środkowego elementu tablicy
    while (l <= p)
    {
        if (tab[sr] == sz)
        {
            return sr;
        }
        else if (tab[sr] > sz)
        {
            p = sr - 1;
        }
        else if (tab[sr] < sz)
        {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return -1;
}

int main()
{
    int szukana;
    int pozycja;
    cout << "Podaj liczbe którą chcesz znaleźć: ";
    cin >> szukana;
    pozycja = wyszukiwaniebinarne(szukana);
    cout << "Liczba " << szukana << " wystepuje w zbiorze w komórce o indeksie " << pozycja;
}