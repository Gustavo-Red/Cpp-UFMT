#include <iostream>

using namespace std;

int main(){
  enum DiaDaSemana { Seg, Ter, Quar, Quin, Sex, Sab, Dom};
  DiaDaSemana hoje = Ter;

  string nomes[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};


  cout << "Hoje é " << nomes[hoje] << endl;



  return 0;
}
