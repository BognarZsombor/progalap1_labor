#include <stdio.h>

int main() {
    int bytes[32768] = {0};

    char programkod[] = ">++++++++++[>+++++++++>++++++++++++>+++++++++++>+++++++++++>++++++++++>+++++++++++>+++++++++++><<<<<<<<-]>>----->+>->-->+>++++><<<<<<<<>.>.>.>.>.>.>.";
    int c = 0;
    int p = 0;
    int run = 1;
    for (int i = 0; programkod[i] != '\0' && run; ++i) {
        switch (programkod[i]) {
            case '>':
                if (c > 32768) {
                    run = 0;
                }
                c++;
                break;
            case '<':
                if (c < 0) {
                    run = 0;
                }
                c--;
                break;
            case '+':
                bytes[c]++;
                break;
            case '-':
                bytes[c]--;
                break;
            case '.':
                printf("%c", (char) bytes[c]);
                break;
            case ',':
                scanf("%d", &bytes[c]);
                break;
            case '[':
                if (bytes[c] == 0) {
                    while (programkod[i] != '\0') {
                        if (programkod[i] == '[') {
                            p++;
                        } else if (programkod[i] == ']') {
                            p--;
                            if (p == 0) {
                                break;
                            }
                        }

                        i++;
                    }
                }
                break;
            case ']':
                while (i > 0) {
                    if (programkod[i] == ']') {
                        p++;
                    } else if (programkod[i] == '[') {
                        p--;
                        if (p == 0) {
                            break;
                        }
                    }

                    i--;
                }
                i--;
                break;
            default:
                run = 0;
                break;
        }
    }

    return 0;
}
