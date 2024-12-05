#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cel{
    char lang[40];
};

typedef struct cel celula[100];
 
int main() {
    int n, k, i=0, j;
    char L[40];
    struct cel celula[100];
    scanf("%d", &n);
    while(i < n){
        scanf("%d", &k);
        getchar();
        for(j=0; j < k; j++){
            fgets(L, 40, stdin);
            strcpy(celula[j].lang, L);
        }
        for(j=1; j < k; j++){
            if(strcmp(celula[0].lang, celula[j].lang) != 0)
                break;
        }
        if(j == k)
            printf("%s", celula[0].lang);
        else{
            printf("ingles\n");
        }
        
        i++;
    }
 
    return 0;
}
