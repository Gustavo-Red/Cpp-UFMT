/*
 * Exercício 7: Troca sem variável temporária
 *
 * Problema prático: Escreva um programa em C++ para trocar os valores das
 * variáveis A e B sem usar uma variável temporária.
 *
 * Dado:
 * int A = 10, B = 20;
 *
 * Resultado esperado:
 *
 * Antes da troca: A = 10, B = 20.
 * Depois da troca: A = 20, B = 10.
 *
 * Dica: use uma sequência de operações aritméticas para realizar a troca.
 *   1. A = A + B  (A agora contém a soma)
 *   2. B = A - B  (B agora detém o A original)
 *   3. A = A - B  (A agora detém o B original)
 */

#include <iostream>

using namespace std;

int main(){
  int A = 10, B = 20;

  cout << "Antes da troca: A = " << A << ", B = " << B << endl;

  A = A + B;
  B = A - B;
  A = A - B;

  cout << "Depois da troca: A = " << A << ", B = " << B << endl;

  

return 0;
}
