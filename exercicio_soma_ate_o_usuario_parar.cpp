// Soma até o usuário parar — fique lendo números inteiros e somando,
// até o usuário digitar 0. Ao final, imprima a soma total.


#include <iostream>

using namespace std;

int main(){
  int soma, num;
  soma = 0;

  while (num != 0){
    cout << "Digite um número inteiro para fazer a soma: ";
    cin >> num;
    soma = soma + num;
    cout << endl << "Soma: " << soma << endl << endl;
}


  return 0;
}
