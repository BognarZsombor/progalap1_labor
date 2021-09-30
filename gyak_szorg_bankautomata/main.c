#include <stdio.h>

int main() {
    int penzek[12] = {20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
    int x;
    printf("Visszajáró: ");
    scanf("%d", &x);

    if (x % 5 != 0) {
        printf("Nem lehet visszaadni!");
        return 0;
    }

    printf("%d Ft = ", x);

    for (int i = 0; i < 12 && x > 0; ++i) {
        int c = 0;
        while (x >= penzek[i]) {
            x -= penzek[i];
            c++;
        }

        if (c > 1) {
            printf("%dx%d Ft", c, penzek[i]);
            if (x > 0)
                printf(" + ");
        } else if (c == 1) {
            printf("%d Ft", penzek[i]);
            if (x > 0)
                printf(" + ");
        }

    }
    printf(".");

    return 0;
}
