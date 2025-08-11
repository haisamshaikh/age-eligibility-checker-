#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18 && age < 60) {
        printf("You are eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}
