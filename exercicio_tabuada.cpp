/*
 * Exercício 16: Tabuada
 *
 * Problema Prático: Dado um número inteiro N, utilize um laço de repetição
 * para gerar e imprimir a tabuada de multiplicação de N até 10 múltiplos
 * (ou seja, N*1, N*2, ..., N*10).
 *
 * Dado:
 * int N = 3;
 *
 * Resultado esperado:
 *
 * Tabuada do 3:
 * 3 x 1 = 3
 * 3 x 2 = 6
 * 3 x 3 = 9
 * ...
 * 3 x 10 = 30
 */
#include <iostream>

using namespace std;

int main(){
  int i = 0, num;
  cout << "Digite um numero inteiro positivo: ";
  cin >> num;
  cout << endl << endl;

cout << "Tabuada do " << num << endl << endl;

  while (i <= 10){
    cout << num << " x " << i << " = " << (num*i) << endl;
    i++;
}

  return 0;
}
