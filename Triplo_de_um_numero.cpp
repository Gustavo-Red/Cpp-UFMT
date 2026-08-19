//Declare uma variavel inteira numero.
//Peça para o usuário digitar um valor e exiba o triplo desse número na tela.

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int numero;
    int triplo;
    cout << "Digite um número inteiro: " << endl;
    cin >> numero;
    triplo = numero*3;
    cout << "O dobro de " << numero << " é " << triplo << endl;
    return 0;
}