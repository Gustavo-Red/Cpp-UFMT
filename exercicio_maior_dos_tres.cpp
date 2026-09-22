//Crie uma função que leia três números e imprima qual é o maior.

#include <iostream>

using namespace std;

int main(void) {
  int maior, primeiro, segundo, terceiro;





  cout << "Informe três números inteiros" << endl;
  cout << "Primeiro: " << endl;
  cin >> primeiro;
  maior = primeiro;
  cout << "Segundo: " << endl;
  cin >> segundo;
  if (primeiro < segundo) {
    maior = segundo;
}
  cout << "Terceiro: " << endl;
  cin >> terceiro;

  if (terceiro > maior) {
    maior = terceiro;
}

  cout << "O maior número é: " << maior << endl;


  return 0;
}
