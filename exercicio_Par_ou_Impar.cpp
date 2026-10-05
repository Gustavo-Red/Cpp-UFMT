/*
 * Exercício 9: Par ou Ímpar
 *
 * Problema prático: Escreva um programa em C++ que determine se o número
 * fornecido é par ou ímpar.
 *
 * Dado:
 * int number = 10;
 *
 * Resultado esperado:
 *
 * 10 é um número PAR.
 */

#include <iostream>

using namespace std;

int main(){
  int N;
  cout << "Digite um número inteiro: ";
  cin >> N;
  cout << endl;
  
  if (N%2 == 0){
  cout << "O número " << N << " é par!" << endl;
} else {
  cout << "O número " << N << " é impar!" << endl;
}


return 0;
}
