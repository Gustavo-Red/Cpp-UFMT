/*
 * Exercício 5
 *
 * Escreva um programa que aloque dinamicamente um número do tipo float
 * usando o operador new. O programa deve pedir para o usuário digitar esse
 * valor, calcular o seu quadrado e exibir o resultado. Antes de finalizar o
 * programa, garanta que a memória alocada seja liberada corretamente com o
 * operador delete.
 */

#include <iostream>
using namespace std;
int main(){
  float num;
  cout << "Digite um número: " << endl;
  cin >> num;
  float *p;
  p = new float;
  *p = num;
  *p = num*num;
  cout << "O quadrado é " << *p << endl;
  delete p;
  p = nullptr;
  return 0;
}
