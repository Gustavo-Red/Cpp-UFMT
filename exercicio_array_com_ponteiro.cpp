/*
 * Exercício 4
 *
 * Declare um array de inteiros de tamanho 5 preenchido com os valores
 * {10, 20, 30, 40, 50}. Utilizando apenas um ponteiro para o primeiro
 * elemento e um laço de repetição (for), imprima todos os elementos e seus
 * respectivos endereços usando a sintaxe *(ptr + i) e (ptr + i).
 */

#include <iostream>
using namespace std;

int main(){
  
  int arr[5] = {10, 20, 30, 40, 50};
  int *ptr = arr;
  for(int i = 0; i < 5; i++){
    cout << "Elemento: " << *(ptr + i) << " || Endereço: " << (ptr + i) << endl;
  }


return 0;
}
