#include <stdio.h>

int main() {
    char str[50];
    int len = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("You entered: %s\n", str);
    printf("Length = %d\n", len);

    return 0;
}

