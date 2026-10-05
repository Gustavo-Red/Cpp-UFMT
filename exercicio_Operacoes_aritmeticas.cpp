/*
 * Exercício 1: Operações Aritméticas
 *
 * Problema Prático: Escreva um programa em C++ que receba dois números
 * inteiros do usuário como entrada. Calcule e exiba a soma, a diferença,
 * o produto e o quociente inteiro desses dois números.
 *
 * Resultado esperado:
 *
 * Digite o primeiro número inteiro: 20
 * Digite o segundo número inteiro: 10
 *
 * Resultados:
 * Soma: 30
 * Diferença: 10
 * Produto: 200
 * Quociente (Divisão Inteira): 2
 */

#include <iostream>

using namespace std;

int main(){
  int num01, num02;
  cout << "Digite um número: ";
  cin >> num01;
  cout << endl;
  
  cout << "Digite outro número: ";
  cin >> num02;
  cout << endl;

  cout << "Soma: " << num01 + num02 << endl;
  cout << "Diferença: " << num01 - num02 << endl;
  cout << "Produto: " << num01*num02 << endl;
  int q = num01/num02;
  cout << "Quociente (Divisão Inteira): " << q << endl;


return 0;
}
