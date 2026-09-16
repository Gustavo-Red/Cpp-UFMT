#include <iostream>
using namespace std;

int main() {
    double salario;
    cout << "Digite o salario: ";
    cin >> salario;

    double reajuste;
    if (salario < 3000.00) {
        reajuste = 0.50;
    } else if (salario <= 10000.00) {
        reajuste = 0.20;
    } else {
        reajuste = 0.15;
    }

    double novoSalario = salario + (salario * reajuste);

    cout << "Percentual de reajuste: " << (reajuste * 100) << "%" << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;

    return 0;
}
