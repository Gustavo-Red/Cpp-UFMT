#include <memory>
#include <iostream>
using namespace std;
int main(){
  shared_ptr<int> a = make_shared<int>(10);
  shared_ptr<int> b;
  b = a;
  cout << "Valor apontado por a: " << *a << endl;
  cout << "Endereço guardado em a: " << a << endl;
  cout << "Valor apontado por b: " << *b << endl;
  cout << "Endereço guardado em b: " << b << endl;
  // usando o .use_count() para saber quantos ponteiros estão apontando para aquele espaço de memória.
  cout << "use_count: " << a.use_count() << endl;
  cout << "antes do bloco: " << a.use_count() << endl;
{
  shared_ptr<int> c = a;
  cout << "dentro do bloco: " << a.use_count() << endl;
}
cout << "depois do bloco: " << a.use_count() << endl;
  return 0;
}
