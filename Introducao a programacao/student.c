#include <stdio.h>
#include <string.h>

int main() {

    char name[50];
    int age;
    float grade;
    float weight;
    char code[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your student code: ");
    scanf("%s", code);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Weight: %.2f\n", weight);
    printf("Grade: %.2f\n", grade);
    printf("Student Code: %s\n", code);

    return 0;




}