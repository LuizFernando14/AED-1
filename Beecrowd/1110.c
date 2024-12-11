#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
    int card;
    struct cel *seg;
};

typedef struct cel deck;

void Stack(int y, deck *p){
    deck *nova;
    nova = malloc(sizeof(deck));
    nova->card = y;
    nova->seg = p->seg;
    p->seg = nova;
}

int CardRemaining(deck *r){
    if(r->seg == NULL) return -1;
    while(r->seg->seg != NULL){
        deck* lixo = r->seg;
        r->seg = lixo->seg;
        if(lixo->card == 1){
            printf(" %d", lixo->card);
        }
        else{
            printf(", %d", lixo->card);
        }
        free(lixo);
        deck* atual = r->seg;
        r->seg = atual->seg;
        atual->seg = NULL;
        deck* aux = r;
        while(aux->seg != NULL){
            aux = aux->seg;
        }
        aux->seg = atual;
    }
    return r->seg->card;
}

int main() {
    int n, i;
    deck *p;
    while(1){
        p = malloc(sizeof(deck));
        p->seg = NULL;
        scanf("%d", &n);
        if(n == 0)
            break;
        for(i = n; i >= 1; i--){
            Stack(i, p);
        }
        printf("Discarded cards:");
        int j = CardRemaining(p);
        getchar();
        printf("\nRemaining card: %d\n", j);
        free(p);
    }

    return 0;
}
