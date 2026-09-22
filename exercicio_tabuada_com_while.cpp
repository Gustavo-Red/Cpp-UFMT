//Tabuada com while — leia um número e imprima a tabuada dele (de 1 a 10) usando while.
//
#include <iostream>

using namespace std;

int main(){
  int i = 0, num;
  cout << "Digite um numero inteiro positivo: ";
  cin >> num;
  cout << endl << endl;
  
  while (i <= 10){
    cout << num << " x " << i << " = " << (num*i) << endl;
    i++;
}

  return 0;
}
