/*
 * Exercício 18: Série de Fibonacci
 *
 * Problema Prático: Gere e imprima a sequência de Fibonacci até o termo N.
 * A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois
 * anteriores (ex.: 0, 1, 1, 2, 3, 5, 8, ...).
 *
 * Dado:
 * int N = 8;
 *
 * Resultado esperado:
 *
 * Sequência de Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13
 */

#include <iostream>

using namespace std;

int main(){
    int num;
    int n = 0;
    int proximo = 0;
    int anterior = 0;
    int atual = 1;
    cout << "Digite um número inteiro positivo: \n" << endl;
    cin >> num;
    num = num + 1;

    while (atual < num + anterior) {
        cout << anterior << endl; // Imprime o número na tela

                // 1. Calcula quem será o próximo termo
                proximo = anterior + atual;

                // 2. Atualiza os valores para a próxima rodada do laço
                anterior = atual;
                atual = proximo;

                // 3. Aumenta o contador em 1
                n++;

    }
    //cout << "Esse número resulta em " <<  << endl;

}
