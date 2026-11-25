#include <memory>
#include <iostream>
using namespace std;
int main(){
  shared_ptr<int> a = make_shared<int>(10);
  weak_ptr<int> w = a;
  cout << "use_count: " << a.use_count() << endl;   // 1 (w não conta)

  if (shared_ptr<int> temp = w.lock()) {
    cout << "ainda existe, valor: " << *temp << endl;
  }

  a.reset();   // a larga o objeto; o contador chega a 0 e o int é liberado

  if (shared_ptr<int> temp = w.lock()) {
    cout << "ainda existe" << endl;
  } else {
    cout << "ja foi liberado" << endl;
  }
  return 0;
}
