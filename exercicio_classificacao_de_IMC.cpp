// Classificação de IMC — leia peso (kg) e altura (m),
// calcule o IMC (peso / (altura*altura)) e classifique:
// abaixo do peso (<18.5), normal (18.5 a 24.9), sobrepeso (25 a 29.9), obesidade (≥30).
// (treina cadeia de else if, igual ao exercício de reajuste que você já fez.)
//
//

#include <iostream>

using namespace std;

int main(void) {
  float peso, altura, imc;

  cout << "Digite seu peso (kg): " << endl;
  cin >> peso;
  cout << "Digite sua altura (m): " << endl;
  cin >> altura;

  imc = peso/(altura*altura);

  if (imc < 18.5) {
    cout << "Abaixo do peso. " << endl;
} else if ( imc >= 18.5 && imc <= 24.9) {
    cout << "Normal " << endl;
} else if ( imc > 25 && imc <= 29.9) {
    cout << "Sobrepeso " << endl;
} else if (imc >= 30) {
    cout << "Obesidade " << endl;
}

  return 0;
}
