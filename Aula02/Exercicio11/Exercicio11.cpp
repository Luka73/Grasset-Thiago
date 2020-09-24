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

    sort(candidatosOrdenados, candidatosOrdenados+4);
    cout << endl;

    if (candidatos[0] == candidatosOrdenados[3]) {
        if (candidatos[0] > metadeDosVotos) {
            cout << "Elu au premier tour." << endl;
        }
        else {
            cout << "Ballottage favorable" << endl;
        }
    }
    else {
        if (candidatos[0] < pontuacaoDeExclusao) {
            cout << "Battu" << endl;
        }
        else {
            cout << "Ballotage defavorable" << endl;
        }
    }

    return 0;
}
