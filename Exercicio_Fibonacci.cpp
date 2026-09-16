#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;

    int a = 0, b = 1;
    cout << "Sequencia de Fibonacci ate " << n << ":\n";
    while (a <= n) {
        cout << a << " ";
        int proximo = a + b;
        a = b;
        b = proximo;
    }
    cout << endl;

    return 0;
}
