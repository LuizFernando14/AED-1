#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, g, i = 0;
    scanf("%d", &n);
    for(i; i < n; i++){
        scanf("%d", &g);
        if(g <= 8000){
            printf("Inseto!\n");
        }
        else{
            printf("Mais de 8000!\n");
        }
    }
}
