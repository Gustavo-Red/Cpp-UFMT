/*
 *. Estrutura para representar uma data
 *
 * Defina uma estrutura chamada Data, contendo os campos dia, mes e ano,
 * do tipo inteiro. Solicite uma data ao usuário e exiba os valores
 * armazenados, utilizando o operador ponto para acessar os membros.
 */

#include <iostream>

using namespace std;

struct Data {
  int dia;
  int mes;
  int ano;

};

int main(){
  Data day;

  cout << "Digite aqui, respectivamente, um dia, um mês e um ano: " << endl;

  cin >> day.dia;
  cin >> day.mes;
  cin >> day.ano;

  cout << endl;

  cout << day.dia << "/" << day.mes << "/" << day.ano << endl;

return 0;
}
