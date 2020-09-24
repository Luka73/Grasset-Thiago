
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int copias;

    cout << "Donnez le numero de photocopies : ";
    cin >> copias;

    double valor = 0;

    if (copias <= 0) {
        cout << "Valeur invalide" << endl;
        return 0;
    }

    if (copias <= 10) {
        valor = copias * 0.10;
    }
    else if (copias <= 30) {
        valor = 10 * 0.10;
        copias -= 10;
        valor = valor + (copias * 0.09);
    }
    else {
        valor = 10 * 0.10;
        copias -= 10;
        valor += 20 * 0.09;
        copias -= 20;
        valor += copias * 0.08;
    }


    cout << "Montant a payer : CAD ";
    cout << fixed << setprecision(2) << valor << endl;

    return 0;
}
