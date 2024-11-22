#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
    char conteudo[1000];
    struct cel *seg;
};

typedef struct cel celula;

int BemFormada (char s[]) {
    char *p;
    int n, i, t;
    n = strlen (s);
    p = malloc (n * sizeof (char));
    t = 0;
    for (i = 0; s[i] != '\0'; i++) {
        /* p[0..t-1] é uma pilha */
        switch (s[i]) {
            case ')':
                if (t != 0 && p[t-1] == '(')
                    t--;
                else{
                    free(p);
                    return 0;
                }
                break;

            case '(':
                p[t++] = s[i];
        }
    }
    free (p);
    return (t == 0);
}

void Empilha (char exp[], celula *p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    strcpy(nova->conteudo, exp);
    nova->seg = NULL;
    celula *temp = p;
    while (temp->seg != NULL) {
        temp = temp->seg;
    }
    temp->seg = nova;
}

int main(){
    char V[1000];
    celula header, *p;
    p = &header;
    p->seg = NULL;
    for(int n = 0; n < 10000; n++){
        fgets(V, sizeof(V), stdin);
        int len = strlen(V);
        if(V[len-1] == '\n')
            V[len-1] = '\0';
        Empilha(V, &header);
    }
    p = header.seg;
    while(p != NULL){
        if(BemFormada(p->conteudo))
            printf("correct\n");
        else{
            printf("incorrect\n");
        }
        p = p->seg;
    }

    return 0;
}
