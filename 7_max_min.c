#include <stdio.h>

int main() {
    int max= 1;
    int min = 1;
    int val;
    while (scanf("%d", &val) != EOF) {
        if (val > max) max = val;
        if (val < min) min = val;
    }
    printf("\nMax value: %d\n", max);
    printf("Min value: %d\n", min);
}
