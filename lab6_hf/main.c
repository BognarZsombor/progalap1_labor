#include <stdio.h>

//3 feladat
void kocka(double a, double *A, double *V) {
    *A = 6*a*a;
    *V = a*a*a;
}

//4 feladat
int tomb(int szamok[], int meret, int szam) {
    for (int i = 0; i < meret; ++i) {
        if (szamok[i] == szam) {
            return i;
        }
    }
    return -1;
}
//4.1 feladat
int *tomb1(int szamok[], int meret, int szam) {
    for (int i = 0; i < meret; ++i) {
        if (szamok[i] == szam) {
            return &szamok[i];
        }
    }
    return NULL;
}

//5 feladat
void nev() {
    char nev[50+1];
    scanf("%s", nev);
    for (int i = 0; nev[i] != '\0'; ++i) {
        printf("%c\n", nev[i]);
    }
}

//6 feladat
void trim(char forras[], char cel[]) {
    int fi1 = 0;
    int fi2 = 0;
    int ci = 0;

    while (forras[fi1] == ' ') { fi1++; }
    while (forras[fi2] != '\0') { fi2++; }
    fi2--;
    while (forras[fi2] == ' ') { fi2--; }

    int i;
    for (i = fi1; i < fi2 + 1; ++i) {
        cel[ci++] = forras[i];
    }
    cel[++i] = '\0';
}

int main() {
    //3 feladat
    double A, V;
    kocka(2.7, &A, &V);
    printf("%lf; %lf\n", A, V);

    //4 feladat
    int szamok[5] = {1, 5, 7, 3, 4};
    tomb(szamok, 5, 7) == -1 ? printf("nincs találat\n") : printf("%d\n", tomb(szamok, 5, 7));

    //4.1 feladat
    int *p = tomb1(szamok, 5, 7);
    p == NULL ? printf("nincs találat\n") : printf("%d\n", p - szamok);

    //5. feladat
    nev();

    //6. feladat
    char forras[] = "   hello, mizu?   ";
    char cel[50+1];
    trim(forras,  cel);
    printf("%s\n", cel);

    return 0;
}
