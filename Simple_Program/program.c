#include <stdio.h>
#include <string.h>

int main() {

    int first_number;
    int second_number;
    char name[50];

    printf("\nHello, World!\n\n");


    printf("Digite seu nome:\n\n");
    fgets(name, 50, stdin);
    printf("\nHello, %s\n\n", name);

    printf("Please add a number.\n\n");
    scanf("%d", &first_number);
    printf("\nYou added: %d\n\n", first_number);

    printf("Please add another number.\n\n");
    scanf("%d", &second_number);
    printf("\nYou added: %d\n\n", second_number);

    int multiplication = first_number * second_number;
    printf("The multiplication of %d and %d is %d\n\n", first_number, second_number, multiplication);

    int sum = first_number + second_number;

    printf("The sum of the two numbers is %d\n\n", sum);
    return 0;

}