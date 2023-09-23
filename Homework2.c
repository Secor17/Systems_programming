//
// Created by kyles on 9/23/2023.
//
#include <stdio.h>

void fizzBuzz(int num) {
    for (int i = 0; i <= num; i++) {
        if (i == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}

int main() {
    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        fizzBuzz(num);
    }

    return 0;
}