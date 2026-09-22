// Calculadora simples — leia um operador (+, -, *, /) e dois números,
// use switch pra decidir a operação e imprima o resultado.
// Trate operador inválido no default.

#include <iostream>

using namespace std;

int main(void) {
  float num01, num02, result;
  int operacao;


  cout << "= Calculadora Simples =" << endl;
  
  cout << endl;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> num01;

  cout << endl;
  
  cout << "Informe a operação desejada..." << endl;
  cout << "1 - adição" << endl;

  cout << "2 - subtração" << endl;

  cout << "3 - multiplicação" << endl;
  
  cout << "4 - divisão" << endl;

  cin >> operacao;

  cout << endl;

  cout << "Digite o segundo número: " << endl;
  cin >> num02;


  cout << endl;


  switch(operacao){
    case 1:
      result = num01 + num02;
      break;
    case 2:
      result = num01 - num02;
      break;
    case 3:
      result = num01*num02;
      break;
    case 4:
      result = num01/num02;
      break;
    default:

      cout << "Você digitou uma operação inválida!" << endl;

  }

  cout << "Resultado: " << result << endl;

  return 0;
}
