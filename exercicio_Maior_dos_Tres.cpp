/*
 * Exercício 10: O Maior dos Três
 *
 * Exercício: Escreva um programa em C++ para determinar e exibir o maior
 * número entre três números fornecidos.
 *
 * Dado:
 * int a = 10, b = 40, c = 30;
 *
 * Resultado esperado:
 *
 * 40 é o maior número.
 */

#include <iostream>
using namespace std;

int main(){
  
  float numeros[3], maior;
  for (int i = 0; i < 3; i++){
    cout << "Digite a nota 0" << i + 1 << ": ";
    cin >> numeros[i];
    cout << endl;
  }

  if (numeros[0] > numeros[1] && numeros[0] > numeros[2]){
    cout << "A nota " << numeros[0] << " é a maior." << endl;
} else if (numeros[1] > numeros[0] && numeros[1] > numeros[2]) {
    cout << "A nota " << numeros[1] << " é a maior." << endl;
} else {
    cout << "A nota " << numeros[2] << " é a maior." << endl;
}

return 0;
}
