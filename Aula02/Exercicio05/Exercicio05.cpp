
#include <iostream>     
#include <string> 

using namespace std;

int maxi(int v1, int v2, int v3) {
	int max;

	if (v1 > v2 && v1 > v3) {
		max = v1;
	}
	else if (v2 > v1 && v2 > v3) {
		max = v2;
	}
	else {
		max = v3;
	}

	return max;
}


int mini(int v1, int v2, int v3) {
	int min;

	if (v1 < v2 && v1 < v3) {
		min = v1;
	}
	else if (v2 < v1 && v2 < v3) {
		min = v2;
	}
	else {
		min = v3;
	}

	return min;
}

int main()
{
	int n1, n2, n3, max, min;

	cout << "Donnez le premier nombre: ";
	cin >> n1;

	cout << "Donnez le deuxieme nombre: ";
	cin >> n2;

	cout << "Donnez le troisieme nombre: ";
	cin >> n3;

	max = maxi(n1, n2, n3);
	min = mini(n1, n2, n3);

	cout << endl;
	cout << "RESULTAT" << endl;
	cout << "Min (" + to_string(n1) + "," + to_string(n2) + "," + to_string(n3) + ") = " + to_string(min) << endl;
	cout << "Max (" + to_string(n1) + "," + to_string(n2) + "," + to_string(n3) + ") = " + to_string(max) << endl;
}

