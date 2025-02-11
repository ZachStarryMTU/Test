#include <stdio.h>

int main() {
    int A[100];  // Example array (should be properly allocated in real use)
    int B[100];
    
    int f = 3;  // Example values
    int g = 2;
    
    // Simulating MIPS operations
    f = A[f * 8 + 6];                   
    int temp = A[f * 8 + 16] + f;       
    B[g] = temp;                        

    printf("B[g] = %d\n", B[g]);
    return 0;
}
