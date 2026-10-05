/*
 * Exercício 2: Área de um retângulo
 *
 * Problema Prático: Escreva um programa em C++ que solicite ao usuário o
 * comprimento e a largura de um retângulo. O programa deve calcular a área
 * (Área = Comprimento x Largura) e exibir o resultado.
 *
 * Resultado esperado:
 *
 * Digite o comprimento do retângulo: 10
 * Digite a largura do retângulo: 5,5
 *
 * A área do retângulo é: 55
 */

#include <iostream>

using namespace std;

int main(){
  float largura, comprimento;
  cout << "Digite a largura do retângulo: ";
  cin >> largura;
  cout << endl;
  cout << "Digite o comprimento do retângulo: ";
  cin >> comprimento;
  cout << endl;
  cout << "A área do retângulo é: " << largura*comprimento << endl;

return 0;
}
