#include <iostream>
using namespace std;

int main() {
    int a[10] = {10, 20, 30, 40};
    int length = 4;    
    int index = 2;      
    int x = 25;         
    for (int i = length; i > index; i--) {
        a[i] = a[i - 1];
    }

    // insert element
    a[index] = x;
    length++;

    // display array
    for (int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

