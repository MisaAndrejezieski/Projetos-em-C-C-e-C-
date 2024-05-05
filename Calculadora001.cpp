#include <iostream>

using namespace std;

int main() {
   float num1, num2, resultado;
   int operador;

   cout << "Digite o primeiro n�mero: ";
   cin >> num1;

   cout << "Digite o segundo n�mero: ";
   cin >> num2;

   cout << "Selecione o operador:\n";
   cout << "1 - Adi��o\n";
   cout << "2 - Subtra��o\n";
   cout << "3 - Multiplica��o\n";
   cout << "4 - Divis�o\n";
   cin >> operador;

   switch (operador) {
      case 1:
         resultado = num1 + num2;
         cout << "Resultado: " << resultado << endl;
         break;
      case 2:
         resultado = num1 - num2;
         cout << "Resultado: " << resultado << endl;
         break;
      case 3:
         resultado = num1 * num2;
         cout << "Resultado: " << resultado << endl;
         break;
      case 4:
         if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
         } else {
            cout << "Divis�o por zero n�o � permitida." << endl;
         }
         break;
      default:
         cout << "Operador inv�lido." << endl;
         break;
   }

   return 0;
}
