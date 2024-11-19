#include <stdio.h>
#include <math.h>

int main(){
    float M;
    int V1[6] = {10000, 5000, 2000, 1000, 500, 200}, V2[6] = {100, 50, 25, 10, 5, 1}, g, i = 0;
    scanf("%f", &M);
    g = round(M*100);
    printf("NOTAS:\n");
    for(i; i < 6; i++){
        printf("%d nota(s) de R$ %d.00\n", g/V1[i], V1[i]/100);
        g %= V1[i];
    }
    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++){
        if(i == 0)
            printf("%d moeda(s) de R$ 1.00\n", g/V2[i]);
        else if(i > 0 && i < 4)
            printf("%d moeda(s) de R$ 0.%d\n", g/V2[i], V2[i]);
        else{
            printf("%d moeda(s) de R$ 0.0%d\n", g/V2[i], V2[i]);
        }
        g %= V2[i];
    }


    return 0;
}
