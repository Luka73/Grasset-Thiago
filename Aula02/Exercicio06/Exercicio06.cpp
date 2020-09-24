
#include <iostream>
#include <string> 

using namespace std;

int main()
{
	int n1, n2, max, min;

	cout << "Donnez le premier nombre: ";
	cin >> n1;

	cout << "Donnez le deuxieme nombre: ";
	cin >> n2;

	if (n1 < n2) {
		cout << to_string(n1) + ", " + to_string(n2) << endl;
	}
	else if(n2 < n1) {
		cout << to_string(n2) + ", " + to_string(n1) << endl;
	}
	else {
		cout << "Les nombres sont le meme.";
	}

	return 0;
}
