#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1 feladat
char *masolat(char *tomb) {
    char *uj_tomb = (char*) malloc(strlen(tomb) * sizeof(char));
    int i;
    for (i = 0; tomb[i] != '\0'; ++i) {
        uj_tomb[i] = tomb[i];
    }
    uj_tomb[i] = '\0';
    return uj_tomb;
}

char *hozzafuz(char *tomb, char *tomb2) {
    char *uj_tomb = (char*) malloc((strlen(tomb) + strlen(tomb2) - 1) * sizeof(char));
    int i;
    for (i = 0; tomb[i] != '\0'; ++i) {
        uj_tomb[i] = tomb[i];
    }
    int j;
    int k = 0;
    for (j = i; tomb2[j] != '\0'; ++j) {
        uj_tomb[j] = tomb2[k++];
    }
    uj_tomb[j] = '\0';
    return uj_tomb;
}

//3 feladat
char *kivag(char *tomb, int k, int v) {
    char *uj_tomb = (char*) malloc((v - k + 1) * sizeof(char));
    int a = 0;
    for (int i = k; i < v; ++i) {
        uj_tomb[a++] = tomb[i];
    }
    uj_tomb[a] = '\0';
    return uj_tomb;
}

//4 feladat
char *elhagy(char *tomb, int k, int v) {
    char *uj_tomb = (char*) malloc((strlen(tomb) - v - k) * sizeof(char));
    int i;
    for (i = 0; i < k; ++i) {
        uj_tomb[i] = tomb[i];
    }
    for (int j = v; tomb[j] != '\0'; ++j) {
        uj_tomb[i++] = tomb[j];
    }
    uj_tomb[i] = '\0';
    return uj_tomb;
}

//5 feladat
char *beszur(char *tomb, int k, char* tomb2) {
    char *uj_tomb = (char*) malloc((strlen(tomb) + strlen(tomb2) - 1) * sizeof(char));
    int i;
    for (i = 0; i < k; ++i) {
        uj_tomb[i] = tomb[i];
    }
    int j;
    for (j = 0; tomb2[j] != '\0'; ++j) {
        uj_tomb[i++] = tomb2[j];
    }
    for (int l = k; tomb[l] != '\0'; ++l) {
        uj_tomb[i++] = tomb[l];
    }
    uj_tomb[i] = '\0';
    return uj_tomb;
}

int main() {
    char tomb[] = "alma";
    //1 feladat
    char *uj_tomb = masolat(tomb);
    printf("%s\n", uj_tomb);
    free(uj_tomb);

    //2 feladat
    uj_tomb = hozzafuz(tomb, "fa");
    printf("%s\n", uj_tomb);
    free(uj_tomb);

    //3 feladat
    uj_tomb = kivag("hello, vilag", 3, 9);
    printf("%s\n", uj_tomb);
    free(uj_tomb);

    //4 feladat
    uj_tomb = elhagy("hello, vilag", 4, 8);
    printf("%s\n", uj_tomb);
    free(uj_tomb);

    //5 feladat
    uj_tomb = beszur("hello!", 5, ", vilag");
    printf("%s\n", uj_tomb);
    free(uj_tomb);

    return 0;
}
