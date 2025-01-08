#include <stdio.h>
#include <stdlib.h>

struct cel{
    int content;
    struct cel *seg1, *seg2, *esq, *dir;
};

typedef struct cel celula;

void BinaryTree(celula **root, int x){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->content = x;
    nova->esq = NULL;
    nova->dir = NULL;
    celula *f = *root, *p;
    if(*root == NULL)
        *root = nova;
    else{
        while (f != NULL) {
            p = f;
            if (f->content >= nova->content)
                f = f->esq;
            else{
                f = f->dir;
            }
        }
        if (p->content >= nova->content)
            p->esq = nova;
        else{
            p->dir = nova;
        }
    }
}

int RemoverTree (celula root) {
    int x;
    celula *q = root;
    while(q->dir != NULL){
        q = q->dir;
    }
    x = q->dir->content;
    free (q);
    return x;
}

void Inserir (int y, celula *p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->valor = y;
    nova->seg = p->seg;
    while(p->seg != NULL){
        p = p->seg;
    }
    p->seg = nova;
}

int Remover (celula *p) {
    int x;
    celula *q;
    q = p->seg;
    x = q->valor;
    p->seg = q->seg;
    free (q);
    return x;
}

void Empilha (int y, celula *p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->valor = y;
    nova->seg = p->seg;
    p->seg = nova;
}

int Desempilha (celula *p) {
    int x;
    celula *q;
    q = p->seg;
    x = q->valor;
    p->seg = q->seg;
    free (q);
    return x;
}



int main() {
    celula *root = NULL, *p = NULL, *q = NULL;
    int o, i;
    while(1){
        int l = 0, m = 0, n = 0;
        scanf("%d", &n);
        for(i = 0; i < o; i++){
            int j, k;
            scanf("%d%d", &j, &k);
            if(j == 1){
                Empilha(k, p);
                Inserir(k, q);
                BinaryTree(&root, k);
            }
            else if(j == 2){
                if(Desempilha(p) == k)
                    l++;
                if(Remover(q) == k)
                    m++;
                if(RemoverTree(root) == k)
                    n++;
        }
        if(l == o && m != o && n != o)
            printf("stack\n");
        if(l != o && m == o && n != o)
            printf("queue\n");
        if(l != o && m != o && n == o)
            printf("priority queue\n");
        if(l == o && m == o && n == o)
            printf("not sure\n");
        if(l != o && m == o && n == o)
            printf("not sure\n");
        if(l == o && m != o && n == o)
            printf("not sure\n");
        if(l == o && m == o && n != o)
            printf("not sure\n");
        if(l != o && m != o && n != o)
            printf("impossible\n");
            
    }

    return 0;
} //Incompleto
