#include <stdio.h>
#include "math.h"
#include "stdbool.h"

typedef struct Pont {
    double x, y;
} Pont;

double tav(Pont a, Pont b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

bool egyenlo(Pont a, Pont b) {
    return a.x == b.x && a.y == b.y ? true : false;
}

Pont beolvas() {
    Pont a;

    printf("X: ");
    scanf("%lf", &a.x);
    printf("Y: ");
    scanf("%lf", &a.y);

    return a;
}

int main() {
    Pont start, a, b;
    double ossz = 0;
    start = beolvas();
    b = start;

    while (!egyenlo(start, a)) {
        a = beolvas();
        ossz += tav(a, b);
        printf("akttav: %lf\n", ossz);
        b = a;
    }

    printf("Távolság: %d\n", ossz);

    return 0;
}
