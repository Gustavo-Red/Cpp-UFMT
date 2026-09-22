//Pirâmide de asteriscos — leia um número N e imprima um triângulo assim (pra N = 4)
// *
// **
// ***
// ****
#include <iostream>

using namespace std;

int main(){
  int N;
  cout << "Digite um numero: ";
  cin >> N;
  cout << endl;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++){
      cout << "*";
}

  cout << endl;
}




  return 0;
}
