#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cel{
    int chave;
    char substr[50];
    struct cel *esq, *dir;
};

typedef struct cel arvore;

void BinaryTree(arvore **root, char str[]){
    arvore *nova;
    nova = malloc(sizeof(arvore));
    nova->chave = strlen(str);
    nova->esq = NULL;
    nova->dir = NULL;
    strcpy(nova->substr, str);
    arvore *f = *root, *p;
    if(*root == NULL)
        *root = nova;
    else{
        while (f != NULL) {
            p = f;
            if (f->chave >= nova->chave)
                f = f->esq;
            else{
                f = f->dir;
            }
        }
        if (p->chave >= nova->chave)
            p->esq = nova;
        else{
            p->dir = nova;
        }
    }
}

void freeTree(arvore *root){
    if(root != NULL){
        freeTree(root->esq);
        freeTree(root->dir);
        free(root);
    }
}

void Erd (struct cel *arvore) {
    if (arvore != NULL) {
        Erd (arvore->dir);
        printf ("%s ", arvore->substr);
        Erd (arvore->esq);
    }
}

int main(){
    arvore *root= NULL;
    char V1[50], V2[50];
    int n, i=0, m, j, k=0;
    scanf("%d", &n);
    getchar();
    while(i < n){
        fgets(V1, 50, stdin);
        m = strlen(V1);
        j = 0;
        k = 0;
        while(j <= m){
            if(V1[j] == ' ' || V1[j] == '\0' || V1[j] == '\n'){
                V2[k] = '\0';
                BinaryTree(&root, V2);
                j++;
                k=0;
            }
            else{
                V2[k] = V1[j];
                j++;
                k++;
            }
        }
        Erd(root);
        freeTree(root);
        root = NULL;
        printf("\n");
        i++;
    }

    return 0;
}
