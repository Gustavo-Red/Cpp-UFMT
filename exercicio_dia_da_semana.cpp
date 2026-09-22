// Nome do dia da semana — 
// leia um número de 1 a 7 e imprima o nome do dia correspondente usando switch.
// Números fora do intervalo caem no default com "dia inválido".
//
#include <iostream>

using namespace std;

int main(void) {
  int numero;

  cout << "Informe um número de  1 a 7 para representar um dia da semana: ";
  cin >> numero;
  cout << endl;

  switch (numero){
    case 1:
    cout << "Domingo" << endl;
    break;

    case 2:
    cout << "Segunda" << endl;
    break;

    case 3:
    cout << "Terça" << endl;
    break;

    case 4:
    cout << "Quarta" << endl;
    break;

    case 5:
    cout << "Quinta" << endl;
    break;

    case 6:
    cout << "Sexta" << endl;
    break;

    case 7:
    cout << "Sábado" << endl;
    break;

    default: 
    cout << "Opção inválida!" << endl;

  }

  return 0;
}
