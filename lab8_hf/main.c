#include <stdio.h>
#include "math.h"

//1 feladat
int fib(int a) {
    if (a == 3 || a == 2) {
        return 1;
    } else {
        return fib(a-1) + fib(a-2);
    }
}

//2 feladat
void tomb_kiir(int i, int meret, int *tomb) {
    if (i >= meret - 1) {
        printf("%d, ", tomb[i]);
    } else {
        printf("%d, ", tomb[i]);
        tomb_kiir(i + 1, meret, tomb);
    }
}

void tomb_kiir_vissza(int i, int meret, int *tomb) {
    if (i >= meret - 1) {
        printf("%d, ", tomb[i]);
    } else {
        tomb_kiir_vissza(i + 1, meret, tomb);
        printf("%d, ", tomb[i]);
    }
}

void feladat2(int *tomb, int meret) {
    for (int i = 0; i < meret; ++i) {
        printf("%d, ", tomb[i]);
    }
    printf("\n");
    tomb_kiir(0, meret, tomb);
    printf("\n");
    for (int i = meret - 1; i >= 0; --i) {
        printf("%d, ", tomb[i]);
    }
    printf("\n");
    tomb_kiir_vissza(0, meret, tomb);
    printf("\n");
}

//4 feladat
int szamrendsz(int i, int sz, int szr) {
    if (sz / 10 == 0) {
        return sz * (int) pow(szr, i);
    } else {
        return sz % 10 * (int) pow(szr, i) + szamrendsz(i+1, sz/10, szr);
    }
}

//5 feladat
void felosztas(int sz, int i) {
    if (sz / 1000 <= 0) {
        printf("%d ", sz);
    } else {
        felosztas(sz / 1000, i + 1);
        printf("%d ", sz % 1000);
    }
}

int main() {
    printf("%d\n", fib(40));
    int tomb[5] = {0, 1, 2, 3, 4};
    feladat2(tomb, 5);
    printf("%d\n", szamrendsz(0, 765, 8));
    felosztas(11222333, 1);
    return 0;
}
