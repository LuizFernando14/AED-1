#include <stdio.h>
#include <math.h>

int main() {
    int a, b, maior, menor, t;
    while(1){
        scanf("%d%d", &a, &b);
        if(a <= 0 || b <= 0){
            break;
        }
        t = 0;
        if(a > b){
            maior = a;
            menor = b;
        }
        else{
            maior = b;
            menor = a;
        }
        for(int i = menor; i <= maior; i++){
            printf("%d ", i);
            t+=i;
        }
        printf("Sum=%d\n", t);

    }

    return 0;
}
