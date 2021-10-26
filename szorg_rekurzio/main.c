#include <stdio.h>
#include "stdlib.h"

char *beolvas(int meret) {
    char c = getc(stdin);
    if (c == '\n') {
        meret++;
        char *tomb = (char*) malloc(meret * sizeof(char));
        tomb[meret-1] = '\0';
        return tomb;
    } else {
        meret++;
        char *tomb = beolvas(meret);
        tomb[meret-1] = c;
        return tomb;
    }
}

int main() {
    printf("Szoveg: ");
    char *tomb = beolvas(0);
    for (int i = 0; tomb[i] != '\0'; ++i) {
        printf("%c", tomb[i]);
    }
    return 0;
}
