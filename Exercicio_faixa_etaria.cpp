#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite a idade: ";
    cin >> idade;

    if (idade >= 0 && idade <= 1) {
        cout << "Bebe" << endl;
    } else if (idade <= 10) {
        cout << "Crianca" << endl;
    } else if (idade <= 17) {
        cout << "Adolescente" << endl;
    } else if (idade <= 64) {
        cout << "Adulto" << endl;
    } else if (idade <= 100) {
        cout << "Idoso" << endl;
    } else {
        cout << "Idade invalida" << endl;
    }

    return 0;
}
