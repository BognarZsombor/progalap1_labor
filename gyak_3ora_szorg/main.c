#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Számjegyek száma: ");
    scanf(" %d", &a);
    int top, bottom;

    if (a % 2 == 0) {
        top = pow(10, (a / 2));
        bottom = pow(10, (a / 2) - 1);
    } else {
        top = pow(10, ceil(a / 2.0));
        bottom = pow(10, a / 2);
    }

    printf("Számok: ");
    for (int i = bottom; i < top; ++i) {
        printf("%d",i);
        int temp_i = i;

        if (a % 2 != 0) {
            temp_i /= 10;
        }

        while (temp_i) {
            printf("%d", temp_i % 10);
            temp_i /= 10;
        }

        printf(" ");
    }
}
