#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main()
{
	int qnt;
	double prix, total, reduction, prixFinale;

	cout << "Prix de l'article : ";
	cin >> prix;

	cout << "Nombre d'articles : ";
	cin >> qnt;

	total = prix * qnt;

	reduction = (total > 300) ? 0.03 : 0.02;

	prixFinale = total - (total * reduction);


	cout << "Le prix avant la reduction est de  ";
	cout << fixed << setprecision(2) << total << endl;
	cout << "Le prix apres la reduction est de  ";
	cout << fixed << setprecision(2) << prixFinale << endl;

	return 0;
}
