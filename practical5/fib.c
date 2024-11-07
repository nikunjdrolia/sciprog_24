#include <stdio.h>

// Function to print Fibonacci series up to n
void fibonacci(int n) {
    int f0 = 0, f1 = 1, fn;
    
    // Print the first two numbers if n >= 2
    if (n >= 1) printf("%d ", f0);
    if (n >= 2) printf("%d ", f1);

    // Calculate the rest of the Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        fn = f0 + f1;
        printf("%d ", fn);
        f0 = f1;
        f1 = fn;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    
    if (n > 0) {
        fibonacci(n);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
