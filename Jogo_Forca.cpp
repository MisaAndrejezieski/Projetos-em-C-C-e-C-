#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string palavraSecreta;
    vector<char> letrasTentadas;
    int numTentativas = 6;
    bool jogoAcabou = false;

    cout << "Bem-vindo ao Jogo da Forca!" << endl;
    cout << "Digite a palavra secreta: ";
    cin >> palavraSecreta;

    while (!jogoAcabou) {
        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;
        letrasTentadas.push_back(letra);

        bool acertou = false;
        for (char c : palavraSecreta) {
            if (letra == c) {
                acertou = true;
                break;
            }
        }

        if (acertou) {
            cout << "Letra correta!" << endl;
            // Continue implementando o jogo...
        } else {
            cout << "Letra errada!" << endl;
            // Continue implementando o jogo...
        }

        // Continue implementando o jogo...
    }

    return 0;
}

