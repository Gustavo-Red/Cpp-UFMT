/*
 * Exercício 8: Juros Simples
 *
 * Exercício: Escreva um programa em C++ para calcular o juro simples para
 * um determinado montante principal, taxa de juros e período de tempo.
 *
 * Dado:
 * double principal = 1000, rate = 10, time = 3;
 *
 * Resultado esperado:
 *
 * Juros simples (JS) são: 300
 */

#include <iostream>

using namespace std;

int main(){
  double principal, rate, time;
  cout << "Digite o valor principal: ";
  cin >> principal;
  cout << endl << endl;
  cout << "Digite o valor do rate: ";
  cin >> rate;
  cout << endl << endl;
  cout << "Digite o tempo em meses: ";
  cin >> time;
  cout << endl << endl;

  cout << "Juros simples (JS) são: " << principal*(rate/100)*time << endl << endl; 



return 0;
}
