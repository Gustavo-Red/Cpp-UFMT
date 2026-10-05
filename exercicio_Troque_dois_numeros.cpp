/*
 * Exercício 6: Troque dois números
 *
 * Problema prático: Escreva um programa em C++ para trocar os valores das
 * variáveis A e B usando uma variável temporária.
 *
 * Dado:
 * int A = 10, B = 20;
 *
 * Resultado esperado:
 *
 * Antes da troca: A = 10, B = 20.
 * Depois da troca: A = 20, B = 10.
 */

#include <iostream>

using namespace std;

int main(){
  int A = 10, B = 5, C;

  cout << "Valor de A: " << A << endl;
  cout << "Valor de B: " << B << endl << endl;

  C = B;
  B = A;
  A = C;

  cout << "Valor de A: " << A << endl;
  cout << "Valor de B: " << B << endl << endl;





return 0;
}
