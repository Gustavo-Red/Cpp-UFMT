/*
 * Exercício 11: Verificação do Ano Bissexto
 *
 * Problema Prático: Crie um programa em C++ que determine se um determinado
 * ano é bissexto. Um ano bissexto tem 366 dias (ex.: 2024, 2000).
 *
 * As regras para um ano bissexto são:
 *   1. Divisível por 4: o ano deve ser divisível por 4.
 *   2. Exceção para anos centenários: se o ano for divisível por 100,
 *      não é um ano bissexto.
 *   3. Exceção à exceção: se o ano for divisível por 100, será um ano
 *      bissexto se também for divisível por 400.
 *
 * Dado:
 * int year = 2024;
 *
 * Resultado esperado:
 *
 * 2024 é um ano bissexto.
 */
#include <iostream>

using namespace std;


int main(){
  int ano;
  cout << "Digite um ano: ";
  cin >> ano;
  cout << endl;

  if ((ano%4 == 0 && ano%100 != 0) || (ano%4 != 0 && ano%100 == 0) || (ano%400 ==0)){
    cout << "É ano bissexto..." << endl;
} else {
    cout << "Não é ano bissexto..." << endl;
}

return 0;
}
