#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
    char conteudo[1000];
    struct cel *seg;
};

typedef struct cel celula;

int Diamond (char s[]) {
    char *p;
    int n, i, t, v;
    n = strlen (s);
    p = malloc (n * sizeof (char));
    t = 0;
    v = 0;
    for (i = 0; s[i] != '\0'; i++) {
        /* p[0..t-1] é uma pilha */
        switch (s[i]) {
            case '>':
                if (t != 0 && p[t-1] == '<'){
                    t--;
                    v++;
                }
                break;

            case '<':
                p[t++] = s[i];
        }
    }
    free (p);
    return v;
}

void Empilha (char exp[], celula *p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    strcpy(nova->conteudo, exp);
    nova->seg = NULL;
    if(p == NULL){
        p = nova;
        p->seg = nova->seg;
    }
    else{
    celula *temp = p;
    while (temp->seg != NULL) {
        temp = temp->seg;
    }
    temp->seg = nova;
    }
}

int main(){
    char V[1000];
    int M, n = 0, len;
    celula header;
    header.seg = NULL;
    scanf("%d", &M);
    getchar();
    while(n < M){
        fgets(V, sizeof(V), stdin);
        Empilha(V, &header);
        n++;
    }
    celula *p = header.seg;
    while(p != NULL){
        printf("%d\n", Diamond(p->conteudo));
        p = p->seg;
    }

    return 0;
}
