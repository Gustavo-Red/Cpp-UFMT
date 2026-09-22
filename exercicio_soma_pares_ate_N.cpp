//Soma dos pares até N — leia um número N e some todos os pares de 1 até N, usando for.


#include <iostream>

using namespace std;


int main(){
  int n, i, soma = 0;
  cout << "Digite um numero inteiro: ";
  cin >> n;
  cout << endl;
  for (i = 1; i <= n; i++){
    if (i%2 == 0){
      soma = soma + i;
      cout << "Soma dos pares = " << soma << endl;
}
  }
  


  return 0;
}
