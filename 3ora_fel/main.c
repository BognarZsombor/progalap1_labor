#include <stdio.h>

void feladat1(void) {
    int n = 1;
    int a = 1;

    while (n <= 8) {
        a *= n;
        n++;
    }

    printf("Szorzat: %d\n", a);
}

void feladat2(void) {
    int tomb[10];

    for (int i = 0; i < 10; i += 1)
        tomb[i] = i * 10;

    int i = 0;
    while (i < 20) {
        printf("%d. elem: %d\n", i, tomb[i]);
        i += 1;
    }
}

void feladat3(void) {
    int tomb[10] = {1, 3 ,20, 67, 34, 85, 47, 24, 97, 11};

    // 1.
    printf("A tömb: ");

    for (int i = 0; i < 10; ++i) {
        printf("%d ", tomb[i]);
    }

    // 2.
    printf("\nA tömb: ");

    for (int i = 0; i < 10; ++i) {
        printf("[%d]=%d", i, tomb[i]);
    }

    // 3.
    int mini = 0;
    for (int i = 0; i < 10; ++i) {
        if (tomb[i] < tomb[mini]) {
            mini = i;
        }
    }
    printf("\nA legkisebb szám: %d\n", tomb[mini]);
    printf("A legkisebb indexe: %d\n", mini);

    // 5.
    printf("Jelölve:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", tomb[i]);
        if (i == mini) {
            printf("[MIN]");
        }
    }
}

void feladat4(void) {
    char szo[10] = "Pitagorasz";
    printf("\nPitagorasz: \n");

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c ", szo[(j + i) % 10]);
        }
        printf("\n");
    }
}

int main() {
    feladat1();
    feladat2();
    feladat3();
    feladat4();

    return 0;
}
