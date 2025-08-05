#include <stdio.h>

int main() {
    int a, 
    int b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF is %d\n", num1);
    return 0;
}