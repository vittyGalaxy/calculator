#include <iostream>
#include "src/functions.cpp"
using namespace std;
#include <cmath>

int main()
{
    float a;
    float b;
    float c;
    int n;
    cout << "Power on" << endl;

    cout << "Inserisci: 1 per la somma, 2 sottrazione, 3 per la divisione, 4 per la moltiplicazione, 5 per la radice quadrata, 6 per la potenza, premi altri numeri se vuoi che finisca il codice" << endl;
    cin >> n;
    while (n == 1 || 2 || 3 || 4 || 5 || 6) //FIXME
    {
        if (n == 1)
        {
            cout << "Inserisci a" << endl;
            cin >> a;
            cout << "Inserisci b" << endl;
            cin >> b;
            cout << "Il risultato è " << sum(a, b) << endl;
        }

        if (n == 2)
        {
            cout << "Inserisci a" << endl;
            cin >> a;
            cout << "Inserisci b" << endl;
            cin >> b;
            cout << "Il risultato è " << difference(a, b) << endl;
        }

        if (n == 3)
        {
            cout << "Inserisci a" << endl;
            cin >> a;
            cout << "Inserisci b" << endl;
            cin >> b;
            cout << "Il risultato è " << division(a, b) << endl;
        }

        if (n == 4)
        {
            cout << "Inserisci a" << endl;
            cin >> a;
            cout << "Inserisci b" << endl;
            cin >> b;
            cout << "Il risultato è " << multiplication(a, b) << endl;
        }

        if (n == 5)
        {
            cout << "Inserisci a" << endl;
            cin >> a;
            cout << "Il risultato è " << compute_square_root(a) << endl;
        }

        if (n == 6)
        {
            cout << "Inserisci la base a" << endl;
            cin >> a;
            cout << "Inserisci l'esponente b" << endl;
            cin >> b;
            cout << "Il risultato è " << power(a, b) << endl;
        }
    }
    cout << "Power off" << endl;

    return 0;
}