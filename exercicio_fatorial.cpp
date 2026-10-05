/*
 * Exercício 17: Fatorial
 *
 * Problema Prático: Escreva um programa em C++ que calcule o fatorial de um
 * inteiro não negativo N. O fatorial de N (escrito como N!) é o produto de
 * todos os inteiros positivos menores ou iguais a N
 * (por exemplo, 5! = 5 * 4 * 3 * 2 * 1 = 120). Observe que 0! = 1.
 *
 * Dado:
 * int N = 5;
 *
 * Resultado esperado:
 *
 * O fatorial de 5 é: 120
 */

#include <iostream>

using namespace std;

int fatorial(int n){
  if (n <= 1){
    return 1;
} else {
   return n*fatorial(n-1);
}
}


int main(){
  int num;
  cout << "Digite um número: ";
  cin >> num;
  cout << endl;

  cout << "O farorial de " << num << " resulta em " << fatorial(num) << "..." << endl;



return 0;
}
