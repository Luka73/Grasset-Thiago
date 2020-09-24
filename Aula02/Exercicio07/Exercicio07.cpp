
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string str[3], temp;

    cout << "Donnez le premier mot: ";
    cin >> str[0];

    cout << "Donnez le deuxieme mot: ";
    cin >> str[1];

    cout << "Donnez le troisieme mot: ";
    cin >> str[2];

    for (int i = 0; i < 3; ++i)
        for (int j = i + 1; j < 3; ++j)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }

    cout << endl;
    cout << "RESULTAT: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << str[i] << endl;
    }
    return 0;
}
