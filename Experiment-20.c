#include <stdio.h>
int main() {
    int choice;
    printf("Choose conversion:\n");
    printf("1> For Binary to Decimal\n");
    printf("2> For Decimal to Binary\n");
    scanf("%d", &choice);
    if (choice == 1) {
        int binaryNumber, decimalNumber = 0, base = 1, remainder;
        printf("Enter a binary number: ");
        scanf("%d", &binaryNumber);
        while (binaryNumber > 0) {
            remainder = binaryNumber % 10;
            decimalNumber += remainder * base;
            binaryNumber /= 10;
            base *= 2;
        }
        printf("Decimal equivalent: %d\n", decimalNumber);
    } 
    else if (choice == 2) {
        int decimalNumber, binaryNumber[32], i = 0;
        printf("Enter a decimal number: ");
        scanf("%d", &decimalNumber);
        while (decimalNumber > 0) {
            binaryNumber[i] = decimalNumber % 2;
            decimalNumber /= 2;
            i++;
        }
        printf("Binary equivalent: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryNumber[j]);
        }
        printf("\n");
    } 
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}
