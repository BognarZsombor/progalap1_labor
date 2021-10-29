#include <stdio.h>
#include "stdlib.h"

char *beolvas(int meret) {
    int c = getc(stdin);
    if (c == '\n' || c == EOF) {
        char *tomb = (char*) malloc(meret * sizeof(char));
        tomb[meret - 1] = '\0';
        return tomb;
    } else {
        char *tomb = beolvas(meret + 1);
        tomb[meret] = c;
        return tomb;
    }
}

void *sort_beolvas(void) {
    return beolvas(0);
}

int main() {
    printf("Szoveg: ");
    char *tomb = sort_beolvas();
    printf("%s", tomb);
    free(tomb);
    return 0;
}
