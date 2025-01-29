#include <stdio.h>
int main() {
    int num1, num2, result;
    char operation;
    printf("Enter an integers: ");
    scanf("%d", &num1);
    printf("Enter an integers: ");
    scanf("%d", &num2);
    printf("\nChoose an operator (+, -, *, /, %%): ");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("\nThe sum is: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe difference of %d - %d = %d", num1, num2, result);
            result = num2 - num1;
            printf("\nThe difference of %d - %d = %d", num2, num1, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe product is: %d", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\nThe quotient of %d / %d = %d", num1, num2, result);
                result = num2 / num1;
                printf("\nThe quotient of %d / %d = %d", num2, num1, result);
            } else {
                printf("\nDivision by Zero is not possible.");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("\nThe remainder of %d %% %d is %d", num1, num2, result);
                result = num2 % num1;
                printf("\nThe remainder of %d %% %d is %d", num2, num1, result);
            } else {
                printf("\nModulus by zero not possible");
            }
            break;
        default:
            printf("\nInvalid operator");
            break;
    }
 return 0;
}
