#include <stdio.h>

int main () {
    char name[100];
    printf("Enter your firstname: ");
    scanf("%100s", name);
    printf("Your firstname is: %s\n", name);
}