#include <stdio.h>
#include "math.h"
#include "stdbool.h"

typedef struct Datum {
    int ev, ho, nap;
} Datum;

typedef struct Versenyzo {
    char nev[31];
    Datum szuletes;
    int helyezes;
} Versenyzo;

// feladat1
void feladat1() {
    double tomb[10] = {2.5, -69, 5.4, -8, -7.7, 6, 2.9, -10, -3, 9.8};
    int negativak[10];

    printf("Összesen %d szám van.\n", 10);
    for (int i = 0; i < 10; ++i) {
        printf("[%d]=%lf", i, tomb[i]);
        if (tomb[i] < 0) {
            negativak[i] = i;
        } else {
            negativak[i] = -1;
        }
    }

    int c = 0;
    for (int i = 0; i < 10; ++i) {
        if (negativak[i] != -1) {
            c++;
        }
    }
    printf("\nEbből %d szám negatív.\n", c);

    for (int i = 0; i < 10; ++i) {
        if (negativak[i] != -1) {
            printf("[%d]=%lf", negativak[i], tomb[i]);
        }
    }
    printf("\n");
}

// feladat2
double kob(double x) {
    return x*x*x;
}

double abszolut(double x) {
    return x > 0 ? x : -x;
}

void feladat2() {
    for (double i = -1; i < 1; i += 0.1) {
        printf("a: %.4lf, a3: %.4lf, abs(a): %.4lf, sin(a): %.4lf\n", i, kob(i), abszolut(i), sin(i));
    }
}

// feladat3
bool mgh(char c) {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'|| c=='A' || c=='E' || c=='I' || c=='O'|| c=='U');
}

void feladat3() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (mgh(c)) {
            printf("%cv%c", c, c);
        } else {
            printf("%c", c);
        }
    }
}

// feladat4
void datum_kiir(Datum d) {
    printf("%d. %d. %d.\n", d.ev, d.ho, d.nap);
}

void versenyzo_kiir(Versenyzo v) {
    printf("név: %s, szul: %d.%d.%d., hely: %d\n", v.nev, v.szuletes.ev, v.szuletes.ho, v.szuletes.nap, v.helyezes);
}

void feladat4() {
    Versenyzo versenyzok[5] = {
            { "Am Erika", {1984, 5, 6}, 1 },
            { "Break Elek", {1982, 9, 30}, 3 },
            { "Dil Emma", {1988, 8, 25}, 2 },
            { "Kasza Blanka", {1979, 6, 10}, 5 },
            { "Reset Elek", {1992, 4, 5}, 4 },
    };

    /* 0-s versenyző neve - printf %s */
    printf("%s\n", versenyzok[0].nev);
    /* 2-es versenyző helyezése */
    printf("%d\n", versenyzok[0].helyezes);
    /* 4-es versenyző születési dátumát (írd meg a datum_kiir függvényt!) */
    datum_kiir(versenyzok[4].szuletes);
    /* 1-es versenyző nevének kezdőbetűjét (ne feledd, a sztring karaktertömb) */
    printf("%c\n", versenyzok[1].nev[0]);
    /* az 1-es versenyző dobogós-e? igen/nem, akár ?: operátorral, de egy printf-fel */
    versenyzok[1].helyezes == 1? printf("igen\n") : printf("nem\n");
    /* az 4-es versenyző gyorsabb-e, mint a 3-as versenyző? */
    versenyzok[4].helyezes > versenyzok[3].helyezes ? printf("igen\n") : printf("nem\n");
    /* az 1-es versenyző ugyanabban az évben született-e, mint a 2-es? */
    versenyzok[1].szuletes.ev == versenyzok[2].szuletes.ev ? printf("igen\n") : printf("nem\n");
    /* egészítsd ki a versenyzo_kiir() függvényt,
     * aztán írd ki az 1-es versenyző összes adatát */
    versenyzo_kiir(versenyzok[1]);
    /* végül listázd ki az összes versenyzőt sorszámozva, összes adatukkal. */
    for (int i = 0; i < 5; ++i) {
        printf("%d. versenyző: ", i);
        versenyzo_kiir(versenyzok[i]);
    }
}

void visszaallit(int *a) {
    *a = 1;
}

void hozzaad(int *a) {
    *a += 1;
}

void elojel(int *a) {
    *a = -*a;
}

void szorzas(int *a) {
    *a *= 2;
}

void feladat5() {
    int run = 1;
    int a = 1;
    int c;
    while (run) {
        printf("0. Alapertek visszaallitasa (a = %d)\n"
               "1. Hozzaad 1-et\n"
               "2. Megforditja az elojelet\n"
               "3. Szorozza 2-vel\n"
               "9. Kilepes\n"
               "Parancs: ", a);

        scanf("%d", &c);

        switch (c) {
            case 0:
                visszaallit(&a);
                break;
            case 1:
                hozzaad(&a);
                break;
            case 2:
                elojel(&a);
                break;
            case 3:
                szorzas(&a);
                break;
            case 9:
                run = 0;
                break;
            default:
                printf("Ismeretlen parancs!");
                break;
        }
    }

}

int main() {
    feladat1();
    feladat2();
    feladat3();
    feladat4();
    feladat5();
    return 0;
}
