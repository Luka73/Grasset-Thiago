#include <iostream>
#include <string>

using namespace std;

int main()
{
	int j1v1, j1v2, j2v1, j2v2, v;

	cout << "Jouer 1" << endl;
	cout << "Donnez le premier valeur du jouer 1: ";
	cin >> j1v1;

	cout << "Donnez le deuxieme valeur du jouer 1: ";
	cin >> j1v2;

	cout << endl;

	cout << "Jouer 2" << endl;
	cout << "Donnez le premier valeur du jouer 2: ";
	cin >> j2v1;

	cout << "Donnez le deuxieme valeur du jouer 2: ";
	cin >> j2v2;

	if (j1v1 == j1v2) {
		v = 1;
		if (j2v1 == j2v2) {
			v = (j1v1 > j2v1) ? 1 : 2;
		}
	}
	else if (j2v1 == j2v2) {
		v = 2;
	}
	else {
		v = ((j1v1 + j1v2) > (j2v1 + j2v2)) ? 1 : 2;
	}

	cout << endl;
	cout << "RESULTAT" << endl;
	if ((j1v1 == j1v2 && j1v1 == j2v1 && j1v1 == j2v2) || (j1v1 + j1v2 == j2v1 + j2v2)) {
		cout << "Personne a gagne. Jouez a nouveau" << endl;
	}
	else {
		cout << "Le jouer " + to_string(v) + " a gagne." << endl;
	}

	return 0;
}