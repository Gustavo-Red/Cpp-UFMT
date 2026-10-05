/*
 * Exercício 14: Tipo Triângulo
 *
 * Problema Prático: Dados os comprimentos dos três lados de um triângulo,
 * determine e escreva o tipo de triângulo:
 *   Equilátero (todos os lados iguais)
 *   Isósceles  (exatamente dois lados iguais)
 *   Escaleno   (nenhum lado igual)
 *
 * Dado:
 * double sideA = 10, sideB = 10, sideC = 8;
 *
 * Resultado esperado:
 *
 * O triângulo é isósceles.
 */

#include <iostream>

using namespace std;

int main(){
  
  float lados[3];
  for (int i = 0; i < 3; i++){
  cout << "Digite quanto vale o lado 0" << i + 1 << " : ";
  cin >> lados[i];
  cout << endl;
}
if ((lados[0] < lados[1] + lados[2]) &&
        (lados[1] < lados[0] + lados[2]) &&
        (lados[2] < lados[0] + lados[1])) {

        if (lados[0] == lados[1] && lados[1] == lados[2]) {
            cout << "Este triângulo é Equilátero." << endl;
        } else if (lados[0] == lados[1] || lados[0] == lados[2] || lados[1] == lados[2]) {
            cout << "Este triângulo é Isósceles." << endl;
        } else {
            cout << "Este triângulo é Escaleno." << endl;
        }

    } else {
        cout << "Isso não forma um triângulo..." << endl;
    }


return 0;
}
