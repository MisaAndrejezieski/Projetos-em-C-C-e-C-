#include<iostream>

int main() {
    int num1, num2, soma;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    soma = num1 + num2;

    std::cout << "A soma de " << num1 << " e " << num2 << " e " << soma << std::endl;

    return 0;
}

