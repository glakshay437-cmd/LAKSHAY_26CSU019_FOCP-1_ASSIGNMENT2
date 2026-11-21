//Question 1 : Find maximum of three integers 
#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int maximum = maxOfThree(a, b, c);

    printf("Largest integer = %d\n", maximum);

    return 0;
}