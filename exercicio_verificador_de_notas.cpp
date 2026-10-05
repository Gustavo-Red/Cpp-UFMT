/*
 * Exercício 13: Verificador de notas
 *
 * Problema Prático: Leia a pontuação numérica de um aluno (de 0 a 100) e
 * atribua uma nota em letra com base nos seguintes critérios, utilizando
 * uma escala if-else if:
 *   A (90-100)
 *   B (80-89)
 *   C (70-79)
 *   D (60-69)
 *   F (abaixo de 60)
 *
 * Resultado esperado:
 *
 * Insira a nota do aluno (0-100): 87
 * Nota: B
 */


#include <iostream>

using namespace std;

int main(){
  float nota;
  cout << "Insira a nota do Aluno (0 - 100): ";
  cin >> nota;
  cout << endl;

if (nota < 0 || nota > 100) {
    cout << "Entrada inválida" << endl;
} else if (nota >= 90) {
    cout << "Nota: A" << endl;
} else if (nota >= 80) {
    cout << "Nota: B" << endl;
} else if (nota >= 70) {
    cout << "Nota: C" << endl;
} else if (nota >= 60) {
    cout << "Nota: D" << endl;
} else {
    cout << "Nota: F" << endl;
}

  return 0;
}
