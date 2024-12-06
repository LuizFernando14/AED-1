#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cel{
    int chave;
    char substr[50];
    struct cel *esq, *dir;
};

typedef struct cel arvore;

void BinaryTree(struct cel *arvore, char substr[]){
    struct cel *nova, *f, *p;
    nova = malloc(sizeof(arvore));
    nova->chave = strlen(substr);
    nova->esq = NULL;
    nova->dir = NULL;
    
    f = &arvore;
    while (f != NULL) {
        p = f;
        if (f->chave > nova->chave)
            f = f->esq;
        else{
            f = f->dir;
        }
    }
    if (p->chave > nova->chave)
        p->esq = nova;
    else{
        p->dir = nova;
    }
}

void Erd (struct cel *arvore) {
    if (arvore != NULL) {
        Erd (arvore->dir);
        printf ("%s", arvore->substr);
        Erd (arvore->esq);
    }
}

int main(){
    struct cel arvore;
    char V1[50], V2[50];
    int n, i=0, m, j=0;
    scanf("%d", &n);
    getchar();
    while(i < n){
        fgets(V1, 50, stdin);
        m = strlen(V1);
        while(j <= m){
            if(V1[j] == ' '){
                V2[j] = '\0';
                BinaryTree(&arvore, V2);
                j++;
            }
            else{
                V2[j] = V1[j];
                j++;
            }
        }
        Erd(arvore);
    }

    return 0;
}
//Incompleto
