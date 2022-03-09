//Liczby pierwsze
#include <iostream>
using namespace std;

int main()
{
    int n = 0; //Ile liczb należy wygenerować
    int lp = 0; //Liczba pierwsza
    int p = 2; //Liczby naturalne
    int d = 2; //Dzielnik

    cout << "Ile liczb pierwszych chcesz wyswietlić: ";
    cin >> n;
    cout << endl << "Liczby pierwsze: ";

    while (lp < n)
    {
        while (d < p)
        {
            if (p % d == 0)
            {
                d = 2;
                p++;
                break;
            }
            d++;
        }
        if (d >= p)
        {
            cout << p << ", ";
            d = 2;
            p++;
            lp++;
        }
    }
}