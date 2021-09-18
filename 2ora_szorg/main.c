#include <stdio.h>
#include <math.h>

#define PI 3.14
#define X1 150
#define Y1 150

int main() {
    FILE* fp;
    fp = fopen("ora.svg", "w");

    int o, p, m;
    printf("Ido: ");
    scanf("%d %d %d", &o, &p, &m);

    o %= 12;
    p %= 60;
    m %= 60;

    fprintf(fp, "<svg width=\"300\" height=\"300\" xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">\n");
    fprintf(fp, "<circle cx=\"150\" cy=\"150\" r=\"100\" stroke=\"black\" fill=\"yellow\"/>\n");

    for (int i = 0; i < 60; ++i) {
        if (i % 5 == 0) {
            fprintf(fp, "<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"black\"/>\n", X1 + 100*sin((6*i*PI)/180), Y1 - 100*cos((6*i*PI)/180), X1 + 80*sin((6*i*PI)/180), Y1 - 80*cos((6*i*PI)/180));
        } else {
            fprintf(fp, "<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"black\"/>\n", X1 + 100*sin((6*i*PI)/180), Y1 - 100*cos((6*i*PI)/180), X1 + 90*sin((6*i*PI)/180), Y1 - 90*cos((6*i*PI)/180));
        }
    }

    for (int i = 0; i < 3; ++i) {
        fprintf(fp, "<line x1=\"%d\" y1=\"%d\" x2=\"%lf\" y2=\"%lf\" stroke=\"black\"/>\n", X1, Y1, X1 + 40*sin(((o*30 + p*30/60 + m*30/60/60)*PI)/180), Y1 - 50*cos((o*30*PI)/180));
        fprintf(fp, "<line x1=\"%d\" y1=\"%d\" x2=\"%lf\" y2=\"%lf\" stroke=\"black\"/>\n", X1, Y1, X1 + 50*sin(((p*6 + m*6/60)*PI)/180), Y1 - 60*cos((p*6*PI)/180));
        fprintf(fp, "<line x1=\"%d\" y1=\"%d\" x2=\"%lf\" y2=\"%lf\" stroke=\"black\"/>\n", X1, Y1, X1 + 60*sin((m*6*PI)/180), Y1 - 70*cos((m*6*PI)/180));
    }

    fprintf(fp, "</svg>");
    fclose(fp);

    return 0;
}
