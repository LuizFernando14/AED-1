#include <stdio.h>

int main(){
    float n;
    int m = 0;
    for(int i = 0; i < 6; i++){
        scanf("%f", &n);
        if(n > 0)
            m++;
    }
    printf("%d valores positivos\n", m);
    
    return 0;
}
