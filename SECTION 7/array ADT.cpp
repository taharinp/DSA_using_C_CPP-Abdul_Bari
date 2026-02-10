#include <iostream>
using namespace std;

struct Array {
    int A[5];
    int size;
    int length;
};

int main() {
    Array marks = {{70, 80, 90}, 5, 3};

    for(int i = 0; i < marks.length; i++)
        cout << marks.A[i] << " ";

    return 0;
}

