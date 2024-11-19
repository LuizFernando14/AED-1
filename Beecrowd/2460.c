#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *seg;
};

typedef struct cel celula;

void BuscaERemove (int x, celula **st) {
    celula *p, *q;
    p = *st;
    q = *st;
    while (q != NULL && q->conteudo != x) {
        p = q;
        q = q->seg;
    }
    if (q != NULL) {
        if(q == *st)
            *st = q->seg;
        else {
            p->seg = q->seg;
        }
        free (q);
    }
}

void Insert(int y, celula **p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->conteudo = y;
    nova->seg = NULL;
    if (*p == NULL)
        *p = nova;
    else {
        celula *aux = *p;
        while(aux->seg != NULL){
            aux = aux->seg;
        }
        aux->seg = nova;
    }
}

int main() {
    int V1[5000], V2[5000], n, m;
    scanf("%d", &n);
    celula *fila = NULL;

    for(int i = 0; i < n; i++){
        scanf("%d", &V1[i]); 
        Insert(V1[i], &fila); //Função para inserir elementos
    }

    scanf("%d", &m);

    for(int i = 0; i < m; i++){
        scanf("%d", &V2[i]);
        BuscaERemove(V2[i], &fila); //Função para buscar elemento específicos e removê-los
    }

    celula *aux = fila;
    while(aux != NULL){
        printf("%d ", aux->conteudo); //Imprime todos os elementos restantes da fila
        aux = aux->seg;
    }

    return 0;
}
