#include <stdlib.h>
#include <stdio.h>

typedef struct ListaElem {
    int adat;
    struct ListaElem *kov;
} ListaElem;

/* létrehoz egy listát, benne egy csomó számmal */
ListaElem *lista_letrehoz(void) {
    int szamok[] = { 8, 14, 13, 17, 1, 19, 16, 5, 3, 11, 2,
                     15, 9, 10, 6, 22, 4, 7, 18, 27, -1 };
    ListaElem *lis = NULL;

    for (int i = 0; szamok[i] != -1; ++i) {
        ListaElem *u;
        u = (ListaElem*) malloc(sizeof(ListaElem));
        u->kov = lis;
        u->adat = szamok[i];
        lis = u;
    }
    return lis;
}

int lista_hossza(ListaElem *eleje) {
    int meret = 0;
    ListaElem *temp = eleje;
    for (; temp->kov != NULL; temp = temp->kov) {
        meret++;
    }
    return meret+1;
}

void lista_felszabadit(ListaElem *eleje) {
    ListaElem *lemarado = eleje;
    ListaElem *temp = eleje->kov;
    for (; temp->kov != NULL; temp = temp->kov) {
        free(lemarado);
        lemarado = temp;
    }
}

int main(void) {
    ListaElem *eleje;

    eleje = lista_letrehoz();
    printf("Hossz: %d", lista_hossza(eleje));
    lista_felszabadit()

    return 0;
}
