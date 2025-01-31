#include <stdio.h>

int main() {
    int c = 0, r = 0, s = 0, n, t = 0, amount;
    float c2, r2, s2;
    char animal;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %c", &amount, &animal);
        t += amount;
        if(animal == 'C'){
            c += amount;
        }
        if(animal == 'R'){
            r += amount;
        }
        if(animal == 'S'){
            s += amount;
        }
    }
        printf("Total: %d cobaias\n" , t);
        printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", c, r, s);
        r2 = r*100; r2 /= t;
        c2 = c*100; c2 /= t;
        s2 = s*100; s2 /= t;
        printf("Percentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", c2, r2, s2);

    return 0;
}
