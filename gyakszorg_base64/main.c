#include <stdio.h>
#include "math.h"

void dec_to_bin(int bin[], int dec) {
    int i = 7;
    while (dec > 0) {
        if (dec % 2 == 0) {
            bin[i--] = 0;
            dec /= 2;
        } else {
            bin[i--] = 1;
            dec--;
            dec /= 2;
        }
    }
}

int bin_to_dec(int bin[]) {
    int dec = 0;
    for (int i = 0; i < 6; ++i) {
        dec += bin[i] * (int) pow(2, 5-i);
    }
    return dec;
}

int main() {
    char szamjegyek[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    char c;
    printf("Text: ");
    int state = 0;
    int bin[8] = {0};
    int base64[6] = {0};
    int base64_temp[6] = {0};
    scanf("%c", &c);

    /*
     * Megpróbáltam így is:
     * while (scanf("%c", &c) != EOF)
     * de nem működött és infinite loopban megakadt, mi lehetett a baja, esetleg van így ötleted?
     * */

    while(c != '\n') {
        dec_to_bin(bin, (int) c);

        if (state == 0) {
            for (int i = 0; i < 6; ++i) {
                base64[i] = bin[i];
            }
            for (int i = 0; i < 2; ++i) {
                base64_temp[i] = bin[i+6];
            }
            printf("%c", szamjegyek[bin_to_dec(base64)]);
            for (int i = 0; i < 6; ++i) {
                base64[i] = base64_temp[i];
            }
            state = 1;
        } else if (state == 1) {
            for (int i = 0; i < 4; ++i) {
                base64[i+2] = bin[i];
            }
            for (int i = 0; i < 4; ++i) {
                base64_temp[i] = bin[i+4];
            }
            printf("%c", szamjegyek[bin_to_dec(base64)]);
            for (int i = 0; i < 6; ++i) {
                base64[i] = base64_temp[i];
            }
            state = 2;
        } else {
            for (int i = 0; i < 2; ++i) {
                base64[i+4] = bin[i];
            }
            printf("%c", szamjegyek[bin_to_dec(base64)]);
            for (int i = 0; i < 6; ++i) {
                base64[i] = bin[i+2];
            }
            printf("%c", szamjegyek[bin_to_dec(base64)]);
            state = 0;
        }
        scanf("%c", &c);
    }

    if (state == 1) {
        printf("%c", szamjegyek[bin_to_dec(base64)]);
        printf("==");
    } else if (state == 2) {
        printf("%c", szamjegyek[bin_to_dec(base64)]);
        printf("=");
    }

    return 0;
}
