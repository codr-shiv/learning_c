// Using while loop
// #include <stdio.h>
// int main () {
//     int lower, upper, step;
//     float fahr, celsius;
//     step = 20;
//     lower = 0;
//     upper = 300;
//     printf("Fahrenheit, Celsius\n");
//     while (lower <= upper) {
//         fahr = lower;
//         celsius = (5.0/9.0)*(fahr-32);
//         lower += step;
//         printf("%f, %f\n", fahr, celsius);
//     }
// }


// Using for loop
// #include <stdio.h>
// int main () {
//     float fahr;
//     printf("Fahrenheit, Celsius\n");
//     for (fahr = 0; fahr <= 300; fahr+=20) {
//         printf("%f, %f\n", fahr, (5.0/9.0)*(fahr-32));
//     }
// }

// Using for loop + symbolic constants

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main () {
    float fahr;
    printf("Fahrenheit, Celsius\n");
    for (fahr=0; fahr<=300; fahr+=20) {
        printf("%f, %f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}