#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int *v;
    v = new int[n];

    cout << "Imprimindo os elementos do vetor v: " << endl;

    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
        cout << v[i] << endl;
    }

    cout << "Dobrando os elementos do vetor v: " << endl;


    for (int i = 0; i < n; i++) {
        v[i] = v[i] * 2;
        cout << v[i] << endl;
    }
    delete[] v; // aqui está liberando a memória alocada dinamicamente para o array v, evitando vazamentos de memória.
    v = nullptr; // é necessário indicar que  o ponteiro não aponta para mais nada, evitando assim o uso de memória que já foi liberada.


    return 0;
}