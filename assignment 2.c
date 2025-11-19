#include <stdio.h>

int main() {
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Surface Area = %f\n", 4 * 3.14 * r * r);

    return 0;
}

