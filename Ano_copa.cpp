#include <iostream>
//#include <stdio.h>
using namespace std;
int main(){

    int year;
    cout << "Digite um ano: " << endl;
    cin >> year;
    if (((year - 1930) % 4 == 0) && (year > 1929) && (year != 1940) && (year != 1942)) {
        cout << year << " é/foi ano de copa" << endl;
    } else {
        cout << year << " não é/foi ano de copa" << endl;
    }

    return 0;
}
