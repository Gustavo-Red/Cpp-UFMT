/*
 * Exercício 5: Valor ASCII
 *
 * Problema Prático: Crie um programa que aceite um único caractere como
 * entrada do usuário. Em seguida, ele deve imprimir o valor inteiro decimal
 * correspondente a esse caractere na tabela ASCII (Código Padrão Americano
 * para Intercâmbio de Informação).
 *
 * Resultado esperado:
 *
 * Digite um único caractere: A
 * O valor ASCII de 'A' é: 65
 */


#include <iostream>

using namespace std;

int main(){

  char c;
  cout << "Digite um único caractere: ";
  cin >> c;
  cout << endl;
  cout << "O valor na tabela ASCII: " << int(c) << endl;




return 0;
}
