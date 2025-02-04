#include <stdio.h>
#include <stdlib.h>

int main(){
    float n, t, w = 0, i;
    int m = 0;
    for(i = 0; i < 6; i++){
        scanf("%f", &n);
        if(n > 0){
            m++;
            w += n;
        }
    }
    t = w/m;
    printf("%d valores positivos\n%.1f\n", m, t);
    
    return 0;
}
