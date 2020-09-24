#include <iostream>     
#include <string> 

using namespace std;

int main() {

	int n1, n2, n3, max, min;

	cout << "Digite o primeiro numero: ";
	cin >> n1;

	cout << "Digite o segundo numero: ";
	cin >> n2;

	cout << "Digite o terceiro numero: ";
	cin >> n3;


	if (n1 > n2 && n1 > n3) {
		max = n1;
		min = (n2 > n3) ? n3 : n2;
	}
	else if (n2 > n1 && n2 > n3) {
		max = n2;
		min = (n1 > n2) ? n2 : n1;
	}
	else {
		max = n3;
		min = (n1 > n2) ? n2 : n1;
	}

	cout << "O maior elemento e " + to_string(max) << endl;
	cout << "O menor elemento e " + to_string(min) << endl;

	return 0;
}