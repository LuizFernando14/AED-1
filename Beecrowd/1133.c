#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, g, i = 0, maior, menor;
    scanf("%d", &n);
    scanf("%d", &g);
    if(g > n){
        maior = g;
        menor = n;
    }
    else{
        maior = n;
        menor = g;
    }
    for(i = menor+1; i < maior; i++){
        if(i%5 == 2 || i%5 == 3){
            printf("%d\n", i);
        }
    }
}
