#include <stdio.h>

int main() {

    int first_number;
    int second_number;

    printf("Hello, World!\n");

    printf("Please add a number.\n");
    scanf("%d", &first_number);
    printf("You added: %d\n", first_number);

    printf("Please add another number.\n");
    scanf("%d", &second_number);
    printf("You added: %d\n", second_number);

    int multiplication = first_number * second_number;
    printf("The multiplication of %d and %d is %d\n", first_number, second_number, multiplication);

    int sum = first_number + second_number;

    printf("The sum of the two numbers is %d\n", sum);
    return 0;

}