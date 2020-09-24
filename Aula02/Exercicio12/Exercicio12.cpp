#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int candidatos[4];
    int candidatosOrdenados[4];
    int totalDeVotos;
    double metadeDosVotos, pontuacaoDeExclusao;

    cout << "Saisissez le score du premier candidat : ";
    cin >> candidatos[0];

    cout << "Saisissez le score du deuxieme candidat : ";
    cin >> candidatos[1];

    cout << "Saisissez le score du troisieme candidat : ";
    cin >> candidatos[2];

    cout << "Saisissez le score du quatrieme candidat : ";
    cin >> candidatos[3];

    totalDeVotos = candidatos[0] + candidatos[1] + candidatos[2] + candidatos[3];
    metadeDosVotos = totalDeVotos * 0.50;
    pontuacaoDeExclusao = totalDeVotos * 0.125;

    for (int i = 0; i < 4; i++) {
        candidatosOrdenados[i] = candidatos[i];
    }

    sort(candidatosOrdenados, candidatosOrdenados + 4);
    cout << endl;

    if (candidatosOrdenados[3] > metadeDosVotos) {
        for (int i = 0; i < 4; i++) {
            if (candidatos[i] == candidatosOrdenados[3]) {
                cout << "Candidat " + to_string(i + 1) + " elu au premier tour." << endl;
                cout << "Autres candidats vaincus." << endl;
                return 0;
            }
        }
    }
    else {
        for (int i = 0; i < 4; i++) {
            cout << "Candidat " + to_string(i + 1) + " : " << endl;
            if (candidatos[i] < pontuacaoDeExclusao) {
                cout << "Battu" << endl;
            }
            else if (candidatos[i] == candidatosOrdenados[3]) {
                cout << "Ballottage favorable" << endl;
            }
            else {
                cout << "Ballotage defavorable" << endl;
            }
        }
    }

    return 0;
}
