/*
 * Exercício 15: Soma dos Números Naturais
 *
 * Problema prático: Utilize um laço for para calcular e exibir a soma de
 * todos os números naturais de 1 até um número N dado, inclusive.
 *
 * Dado:
 * int N = 10;
 *
 * Resultado esperado:
 *
 * A soma dos números naturais até 10 é: 55
 */

#include <iostream>

using namespace std;

int main(){
  int N, soma = 0;
  cout << "Digite um número natural 'N' maior que zero: ";
  cin >> N;
  cout << endl;

if (N < 1) {
    cout << "N precisa ser maior que zero." << endl;
} else {
  for (int i = 1; i <= N; i++){
  if (i == 1) {
    soma = i;
} else {
    soma = soma + i; 
}
}

cout << "Essa soma resulta em " << soma << "..." << endl;

}

return 0;
}
