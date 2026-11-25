/*
Exercício – Classe Termometro (encapsulamento, validação e construtor)

Crie uma classe Termometro que represente a temperatura em graus Celsius.

Requisitos:
 - O atributo celsius (double) deve ser PRIVADO.
 - Um construtor que inicialize o celsius com 25.0.
 - Um método público set(double x) que guarda o valor em celsius, mas
   REJEITA temperaturas abaixo do zero absoluto (-273.15):
     * se x < -273.15: imprima "Entrada inválida" e NÃO altere o celsius;
     * caso contrário: guarde x em celsius.
 - Um método público get() que devolve o valor de celsius.

No main:
 - Crie um Termometro e leia do usuário a temperatura atual.
 - Chame set() com o valor lido.
 - Imprima a temperatura usando get().

Exemplos de execução:
 Entrada: 30    -> "Está fazendo 30 graus celsius..."
 Entrada: -300  -> "Entrada inválida"
                   "Está fazendo 25 graus celsius..."
                   (o valor inicial 25.0 do construtor foi mantido)

Conceitos praticados: class, private/public, encapsulamento,
construtor, getter/setter e validação de dados.
*/
#include <iostream>
using namespace std;
class termometro{
private:
  double celsius;
public:
  termometro(){
    celsius = 25;
}
  void set(double x){
    if (x < -273.15){
      cout << "Entrada inválida" << endl;
  }
    else {
      celsius = x;
  }
  }
  double get(){
    return celsius;
  }
};

int main(){
  termometro t;
  double x;
  cout << "Digite quantos graus celsius está fazendo: " << endl;
  cin >> x;
  t.set(x);
  cout << "Está fazendo " << t.get() << " graus celsius..." << endl;
return 0;
}
