#include <stdio.h>

void dec_to_bin(int bin[], int dec) {
    int i = 0;
    while (dec > 0) {
        if (dec % 2 == 0) {
            bin[i++] = 0;
            dec /= 2;
        } else {
            bin[i++] = 1;
            dec--;
            dec /= 2;
        }
    }
}

int main() {
    char c;
    printf("Text: ");
    int counter = 0;

    while(scanf("%c", &c) != EOF) {
        scanf("%c", &c);

        int bin[8] = {0};
        dec_to_bin(bin, (int) c);

        int base64[] = {0};
        for (int i = 0; i < 6; ++i) {
            base64[i] = bin[i];
        }
    }
    return 0;
}
