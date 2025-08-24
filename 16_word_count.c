#include <stdio.h>
int main () {
    int c, nw, nc, nl;
    nw = nc = nl = 0;
    int inword = 0;
    while ((c=getchar()) != EOF) {
        nc++;
        if (c=='\n') {
            nl++;
            inword=0;
        }
        else if (inword==0) {
            inword = 1;
        }
    }
    printf("\nLines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
}