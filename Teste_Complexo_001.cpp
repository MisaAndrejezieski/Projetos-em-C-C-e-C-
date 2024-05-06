#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string frase;
	printf("=====================================");
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    std::cout << "Frase original: " << frase << std::endl;

    std::reverse(frase.begin(), frase.end());

    std::cout << "Frase invertida: " << frase << std::endl;

    std::transform(frase.begin(), frase.end(), frase.begin(), ::toupper);

    std::cout << "Frase invertida em maiusculas: " << frase << std::endl;

    return 0;
}

