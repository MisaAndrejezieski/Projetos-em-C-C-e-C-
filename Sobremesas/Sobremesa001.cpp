#include <iostream>
#include "Benco.h"
#include "PrimePack.h"
#include "EltonFlan.h"
#include "FormsealR.h"

using namespace std;

enum Produtos { BENCO = 1, PRIMEPACK, ELTONFLAN, FORMSEALR };

int main() {
    int escolha;
    char resposta;
    
    do {
        cout << "-----------------------------------\n";
        cout << "            SOBREMESA\n";
        cout << "-----------------------------------\n";
    
        cout << "\nEscolha a linha de producao:\n1 - Benco\n2 - Prime Pack\n3 - Elton Flan\n4 - Formseal R\n";
        cin >> escolha;

        switch(escolha) {
            case BENCO:
                // C�digo para Benco
                break;
            case PRIMEPACK:
                // C�digo para PrimePack
                break;
            case ELTONFLAN:
                // C�digo para EltonFlan
                break;
            case FORMSEALR:
                // C�digo para FormsealR
                break;
            default:
                cout << "Op��o inv�lida!\n";
                break;
        }
    } while (escolha != 0);

    return 0;
}

