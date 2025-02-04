#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, media;
    while(1){
        int num = 0;
        while(1){
            scanf("%f", &a);
            if(a <= 10 && a >= 0){
                break;
            }
            printf("nota invalida\n");
        }
        while(1){
            scanf("%f", &b);
            if(b <= 10 && b >= 0){
                break;
            }
            printf("nota invalida\n");
        }
        media = (a+b)/2;
        printf("media = %.2f\n", media);
        while(num != 1 && num != 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &num);
            if(num == 2){
                break;
            }
            if(num == 1){
                break;
            }
        }
        if(num == 2){
            break;
        }
    }
    
    return 0;
}
