// Execute a opção escolhida e volte a mostrar o menu, até o usuário escolher "Sair".
// Use do-while (o menu precisa aparecer pelo menos uma vez, mesmo antes de saber a escolha).
//
#include <iostream>

using namespace std;

int main() {
  int entrada;

  do {
    cout << endl << "Digite..." << endl << endl;

    cout << "1 - para executar a função soma" << endl;

    cout << "Qualquer numero - para sair" << endl;

    cin >> entrada;

    cout << endl;

    if (entrada == 1){
      int num01, num02;
      cout << "Digite um numero inteiro: ";
      cin >> num01;
      cout << endl << endl;
      
      cout << "Digite outro número: ";
      cin >> num02;
      cout << endl << endl;
      

      cout << "A soma resulta em " << (num01 + num02) << endl;


}

  } while (entrada == 1);


  return 0;
}
