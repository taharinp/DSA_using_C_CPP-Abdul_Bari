#include <iostream>
using namespace std;

int main()
{
    int *P = new int[5];

    for(int i = 0; i < 5; i++)
        P[i] = i + 1;      // Step 1: Fill original array

    int *Q = new int[10];   // Step 2: Create bigger array

    for(int i = 0; i < 5; i++)
        Q[i] = P[i];        // Step 3: Copy old values

    delete[] P;             // Step 4: Free old memory
    P = Q;                  // Step 5: Use new array

    for(int i = 5; i < 10; i++)
        P[i] = i + 1;       // Step 6: Fill rest of the array

    for(int i = 0; i < 10; i++)
        cout << P[i] << " ";  // Step 7: Print all elements

    delete[] P;             // Step 8: Free new memory
    return 0;
}

