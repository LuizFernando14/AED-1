#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, maior, menor, total = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a > b){
        maior = a;
        menor = b;
    }
    else{
        maior = b;
        menor = a;
    }
    for(int i = maior-1; i > menor; i--){
        if(i%2 == 1 || i%2 == -1){
            total += i;
        }
    }
    printf("%d\n", total);
    
    return 0;
}
