#include <stdio.h>

int main() {
    int binary, decimal[32], i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary> 0) {
        decimal[i++] = binary % 2;
        binary/= 2;
    }
    printf("decimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", decimal[j]);

    printf("\n");

    return 0;
}