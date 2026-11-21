//Question 5 : GCD using Euclid's algorithm 
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);

    printf("GCD = %d\n", result);

    return 0;
}