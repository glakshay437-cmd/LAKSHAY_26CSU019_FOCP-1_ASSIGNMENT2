//Question 3 : Rectangle area function 
#include <stdio.h>

int rectangleArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);

    int area = rectangleArea(length, width);

    printf("Area = %d\n", area);

    return 0;
}