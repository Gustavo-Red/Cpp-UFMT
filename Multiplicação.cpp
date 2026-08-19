//Crie um programa que some dois numeros

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int numero01;
    int numero02;
    cout << "Digite um número inteiro: " << endl;
    cin >> numero01;
    cout << "Digite outro numero inteiro: " << endl;
    cin >> numero02;
    cout << " A multiplicação de " << numero01 << " e " << numero02 << " é " << (numero01*numero02) << endl;
    return 0;
}