#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    string name;
    string city;
    cout << "Digite seu nome: " << endl;
    //cin >> name;
    getline(cin, name);
    cout << "Digite sua cidade (sem espaços): " << endl;
    //cin >> city;
    getline(cin, city);
    cout << "Seu nome é "<< name << " e você mora em "<< city << endl;

    return 0;
}