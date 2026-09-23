#include <iostream>

using namespace std;


struct Data {

  int dia;
  int mes;
  int ano;

};


int main(){
  
  Data hoje;

  hoje.dia = 23;
  hoje.mes = 9;
  hoje.ano = 2026;

  cout << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;


  return 0;
}
