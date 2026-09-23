/*
 * . Conversão de dólares para reais com função inline
 *
 * Solicite uma quantia em dólares e a cotação do dólar em reais.
 * Implemente uma função inline para realizar a conversão e retornar
 * o valor em reais.
 */

#include <iostream>

using namespace std;

inline float convertor(float quant_dolares, float cotacao){
  return quant_dolares * cotacao;
}

int main(){
  float dolares, cotacao;
  cout << "Digite quantos dolares voce quer converter para reais: ";
  cin >> dolares;
  cout << endl;

  cout << "Digite quanto ta valendo o dolar em reais: ";
  cin >> cotacao;
  cout << endl;

  cout << "Isso equivale a " << convertor(dolares, cotacao) << " reais..." << endl;
  return 0;
}
