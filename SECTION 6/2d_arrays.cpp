#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 4;
    int A[8];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            A[i*cols + j] = i*cols + j;
        }
    }

    for(int i = 0; i < rows*cols; i++) {
        cout << A[i] << " ";
    }
}

