//Question 2 : Count multiples in a range 
#include <stdio.h>

int countMultiples(int n, int k) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, k;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    int result = countMultiples(n, k);

    printf("Count of multiples = %d\n", result);

    return 0;
}