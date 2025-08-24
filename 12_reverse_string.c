#include <stdio.h>
int main () {
    char str[] = "Hello, World!";
    char temp;
    int i, j, l;
    for (l=0; str[l]; l++);
    for (i=0; i<l-1; i++) {
        temp = str[0];
        for (j=1; j<l-i; j++) {
            str[j-1]=str[j];
            str[j] = temp;
        }
    }
    printf("Reversed string is: %s\n", str);
}

