// Approach 1
// #include <stdio.h>
// int main() {
//     char name[100];
//     scanf("%[^\n]100s", name);
//     printf("Your fullname is: %s\n", name);
// }

// Approach 2

#include <stdio.h>
int main () {
    char name[1000];
    printf("Enter your fullname: ");
    fgets(name, 1000, stdin);
    printf("Your fullname is: %s", name);
}