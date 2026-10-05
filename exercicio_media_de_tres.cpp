/*
 * Exercício 3: Média de Três
 *
 * Problema prático: Desenvolva um programa em C++ que calcule e exiba a
 * média aritmética (média aritmética) de três números dados.
 *
 * Dado:
 * double num1 = 4.5, num2 = 5.5, num3 = 6.5;
 *
 * Resultado esperado:
 *
 * A média dos três números é: 5,5
 */

#include <iostream>

using namespace std;

int main(){
  float num01, num02, num03;
  cout << "Digite um numero: ";
  cin  >> num01;
  cout << endl;

  cout << "Digite outro numero: ";
  cin  >> num02;
  cout << endl;

  cout << "Digite outro numero: ";
  cin  >> num03;
  cout << endl;

  cout << "A média dos três números é: " << (num01+num02+num03)/3 << endl;
return 0;
}
