#include <stdio.h>
int main () {
    int add();
    printf("%d\n", add(5,2));
}

int add (a,b) int a,b; {
    return a+b;
}