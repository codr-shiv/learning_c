#include <stdio.h>
int main() {
    char x[]="Hello";
    int len();
    printf("Length of string is: ", len(x));
}
int len(str) char str[]; {
    int i;
    for (i=0; str[i]; i++);
    return i;
}