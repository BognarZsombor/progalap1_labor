#include <stdio.h>
#include <ctype.h>
#include "string.h"
#include "stdbool.h"

bool palindrom(char text[]) {
    int hossz = strlen(text);
    int i = 0;
    int j = hossz - 1;
    bool volt_hiba = false;

    if (!isalpha(text[j])) {
        j--;
    }

    while (i < hossz && j >= 0 && !volt_hiba) {
        if (text[i] == ' ')
            i++;
        else if (text[j] == ' ')
            j--;
        else if (text[i++] != text[j--])
            volt_hiba = true;
    }

    return !volt_hiba;
}

int main() {
    char text[50+1];
    printf("Szoveg: ");
    scanf("%50[^\n]", text);

    for(int i = 0; text[i]; i++){
        text[i] = tolower(text[i]);
    }

    palindrom(text) ? printf("Palindrom.") : printf("Nem palindrom.");

    return 0;
}
