//Declare uma variavel inteira numero.
//Peça para o usuário digitar um valor e exiba o dobro desse número na tela.

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int numero;
    int dobro;
    cout << "Digite um número inteiro: " << endl;
    cin >> numero;
    dobro = numero*2;
    cout << "O dobro de " << numero << " é " << dobro << endl;
    return 0;
}