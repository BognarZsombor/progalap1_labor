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

ListaElem *lista_elejere_beszur(ListaElem *eleje, int elem) {
    ListaElem *temp = (ListaElem*) malloc(sizeof(ListaElem));
    temp->adat = elem;
    temp->kov = eleje;
    return temp;
}

ListaElem *lista_vegere_beszur(ListaElem *eleje, int elem) {
    ListaElem *temp = (ListaElem*) malloc(sizeof(ListaElem));
    temp->adat = elem;
    temp->kov = NULL;
    if (eleje == NULL) {
        return temp;
    }

    ListaElem *i;
    for (i = eleje; i->kov != NULL; i = i->kov) {

    }
    i->kov = temp;
    return eleje;
}

ListaElem *lista_keres(ListaElem *eleje, int elem) {
    ListaElem *temp;
    for (temp = eleje; temp != NULL; temp = temp->kov) {
        if (temp->adat == elem) {
            return temp;
        }
    }
    return NULL;
}

int main(void) {
    ListaElem *eleje;
    eleje = lista_letrehoz();

    printf("Hossz: %d\n", lista_hossza(eleje));
    eleje = lista_elejere_beszur(eleje, 21);
    eleje = lista_vegere_beszur(eleje, 1);
    for (ListaElem *temp = eleje; temp != NULL; temp = temp->kov) {
        printf("%d, ", temp->adat);
    }
    printf("\n");
    ListaElem *keresett = lista_keres(eleje, 1);
    if (keresett != NULL) {
        printf("Keresett elem: %d\n", keresett->adat);
    }

    lista_felszabadit(eleje);
    return 0;
}
