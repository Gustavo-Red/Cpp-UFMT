#include <iostream>
using namespace std;

int main(){
    int arr[3] = {1, 2, 3};
    int *p = arr; // Pointer to the first element of the array
    for (int i = 0; i < 3; i++) {
        cout << "Element " << i << ": " << *(p + i) << " || Endereço: " << (p + i) << endl; // Accessing array elements using pointer arithmetic
    }

    return 0;
}