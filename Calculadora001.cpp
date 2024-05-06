#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;

    cout << "Digite o segundo número: ";
    cin >> num2;

    switch(operacao) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Erro! Divisão por zero não é permitida." << endl;
            break;
        default:
            cout << "Operação inválida!" << endl;
            break;
    }

    return 0;
}
