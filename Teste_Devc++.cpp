#include<iostream>

int main() {
    int num1, num2, soma;

    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;

    soma = num1 + num2;

    std::cout << "A soma de " << num1 << " e " << num2 << " � " << soma << std::endl;

    return 0;
}

