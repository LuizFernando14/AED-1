#include <stdio.h>
#include <stdlib.h>

struct cel{
    int card;
    struct cel *seg;
};

typedef struct cel deck;

void Stack(int y, celula *p){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->card = y;
    nova->seg = p->seg;
    p->seg = nova;
}

void Cicle(celula *p){
    celula *aux;
    while(aux->seg != NULL){
        aux->seg;
    }
    aux->seg = p->seg;
}

int CardRemaining(celula *p){
    
}

int main() {

    return 0;
} //Incompleto
