// crie uma função que leia um número inteiro e diga se é par ou ímpar
//
//
#include <iostream>

using namespace std;

int main(void) {
  
  int numero;

  cout << "Digite um número inteiro diferente de zero: " << endl;
  cin >> numero;
  
  if (numero%2 == 0 && numero != 0) {
    cout << "Esse número é par." << endl;
} else {
  cout << "Esse número é impar" << endl;
}

  return 0;
}
