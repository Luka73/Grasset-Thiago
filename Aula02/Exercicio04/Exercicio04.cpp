#include <iostream>
#include <algorithm> 
#include <string>

using namespace std;

int main()
{
	int n1, n2, maxi, mini;

	cout << "Donnez le premier nombre: ";
	cin >> n1;

	cout << "Donnez le deuxieme nombre: ";
	cin >> n2;

	maxi = max(n1, n2);
	mini = min(n1, n2);

	cout << endl;
	cout << "RESULTAT" << endl;
	cout << "Min (" + to_string(n1) + "," + to_string(n2) + ") = " + to_string(mini) << endl;
	cout << "Max (" + to_string(n1) + "," + to_string(n2) + ") = " + to_string(maxi) << endl;
	
	return 0;
}

