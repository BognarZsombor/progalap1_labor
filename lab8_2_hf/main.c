#include <stdio.h>
#include <stdlib.h>

//1 feladat
void feladat1() {
    printf("Darabszam: ");
    int count;
    scanf("%d", &count);
    double *tomb = (double*) malloc(count * sizeof(double));

    for (int i = 0; i < count; ++i) {
        printf("Szam: ");
        scanf("%lf", &tomb[i]);
    }
    printf("\n");

    for (int i = count-1; i >= 0; --i) {
        printf("%.lf, ", tomb[i]);
    }

    printf("\n");
    free(tomb);
}

//2 feladat
int *atmeretez(double tomb[], int count) {
    double *temp_tomb = (double*) malloc(count * sizeof(double));
    for (int i = 0; i < count; ++i) {
        temp_tomb[i] = tomb[i];
    }
    free(tomb);
    return temp_tomb;
}

void feladat2() {
    int count = 0;
    double szam;
    int *tomb = (int*) malloc(count * sizeof(int));

    do {
        printf("szam:");
        scanf("%.lf", &szam);
        count++;
        tomb = atmeretez(tomb, count);
        tomb[count - 1] = szam;
    } while (szam != -1);

    printf("\n");
    for (int i = count-2; i >= 0; --i) {
        printf("%.lf, ", tomb[i]);
    }

    free(tomb);
}

//feladat 3/4
char *atmeretez_2(char tomb[], int count) {
    char *temp_tomb = (char*) malloc(count * sizeof(char));
    for (int i = 0; i < count; ++i) {
        temp_tomb[i] = tomb[i];
    }
    free(tomb);
    return temp_tomb;
}

char *feladat3() {
    int count = 1;
    char c;
    char *tomb = (char*) malloc(count * sizeof(char));
    printf("text:");

    do {
        c = getc(stdin);
        tomb[count-1] = c;
        count++;
        tomb = atmeretez_2(tomb, count);
    } while (c != '\n');
    printf("\n");

    return tomb;
}

int main() {
    feladat1();
    feladat2();

    char *tomb = feladat3();
    printf("%s", tomb);
    return 0;
}
