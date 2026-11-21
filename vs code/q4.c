//Question 4 : Perfect square without sqrt
#include <stdio.h>

int isPerfectSquare(int n) {
    if (n < 0) {
        return 0;
    }

    if (n == 0 || n == 1) {
        return 1;
    }

    for (int i = 1; i <= n / i; i++) {
        if (i * i == n) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = isPerfectSquare(n);

    printf("%d\n", result);

    return 0;
}