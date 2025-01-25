#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
    int size;
    struct cel *seg;
};

typedef struct cel celula;

void Insere (int y, celula* p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->size = y;
    while(p->seg != NULL)
        p = p->seg;
    p->seg = nova;
    p->seg->seg = NULL;
}

void WallCount(celula *p, int x, int y){
    while(1){
        if(x > p->seg->size){
            if(p->seg->seg == NULL){
                Insere(y, p);
            }
        }
        else{
            p->seg->size -= x;
            break;
        }
        p = p->seg;
    }

}

int main(){
    int m, s, P, M, G, i;
    scanf("%d%d", &m, &s);
    getchar();
    char V[m+1];
    celula *p = malloc(sizeof(celula));
    p->seg = NULL;
    fgets(V, m+1, stdin);
    getchar();
    scanf("%d%d%d", &P, &M, &G);
    Insere(s, p);
    for(i = 0; i < m; i++){
        if(V[i] == 'G'){
            WallCount(p, G, s);
        }
        else if(V[i] == 'M'){
            WallCount(p, M, s);
        }
        else if(V[i] == 'P'){
            WallCount(p, P, s);
        }
    }
    int t = 0;
    while(p->seg != NULL){
        p = p->seg;
        t++;
    }
    printf("%d\n", t);

    return 0;
}
