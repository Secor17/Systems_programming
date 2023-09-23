//
// Created by kyles on 9/23/2023.
//
#include <stdio.h>

int main() {
    int num;

    printf("Enter a grade in number format: ");

    if (scanf("%d", &num) != 1) {
        printf("Your input could not be interpreted as an integer value.\n");
        return 1; //problem with the input, i.e not a number.
    }

    if (num >= 90 && num <= 100) {
        printf("Your grade is an A\n");
    } else if (num >= 80 && num < 90) {
        printf("Your grade is a B\n");
    } else if (num >= 70 && num < 80) {
        printf("Your grade is a C\n");
    } else if (num >= 60 && num < 70) {
        printf("Your grade is a D\n");
    } else if (num >= 0 && num < 60) {
        printf("Your grade is an F\n");
    } else {
        printf("Enter a valid number. (between 0-100)\n");
        return 1;
    }

    return 0;
}





