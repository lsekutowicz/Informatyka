//Obliczanie NWW oraz NWD
#include <iostream>
using namespace std;

int main()
{
    int d = 0; //Najwięsza wspólna wielokrotność (NWW)
    int a = 0; //Wprowadzanie liczb do pamięci
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    int b = 0; //Wprowadzanie liczb do pamięci
    cout << endl << "Podaj druga liczbe: ";
    cin >> b;

    int c = 0;
    c = a * b;

    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else if (b < a)
        {
            a = a - b;
        }
    }

    d = c / a;

    cout << "Największy wspólny dzielnik (NWD): " << a << endl;
    cout << "Największa wspólna wielokrotność (NWW): " << d;
}