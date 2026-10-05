/*
 * Exercício 4: Tamanhos de Tipos de Dados
 *
 * Problema Prático: Escreva um programa que utilize o recurso da linguagem
 * C++ para determinar e imprimir o tamanho, em bytes, dos quatro tipos de
 * dados fundamentais: char, int, float e double.
 *
 * Dado:
 * char c = 'C';
 * int a = 60;
 * float f = 15.5;
 * double d = 25.555;
 *
 * Resultado esperado:
 *
 * Tamanho de um char: 1 byte(s)
 * Tamanho de um int: 4 byte(s)
 * Tamanho de um float: 4 byte(s)
 * Tamanho de um double: 8 byte(s)
 */


#include <iostream>

using namespace std;

int main(){

  char c = 'C';
  int a = 60;
  float f = 15.5;
  double d = 25.555;

  cout << "Tamanho de uma char: " << sizeof(c) << " bytes" << endl;
  cout << "Tamanho de um int: " << sizeof(a) << " bytes" << endl;
  cout << "Tamanho de um float: " << sizeof(f) << " bytes" << endl;
  cout << "Tamanho de um double: " << sizeof(d) << " bytes" << endl;





  return 0;
}
