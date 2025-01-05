#include <stdio.h>

int shuffleDeck(int n){
    int V1[n], V2[n], j, v1[n/2], v2[n/2], m = 0, p = 0;
    for(j = 0; j < n; j++){
        V1[j] = j+1;
        V2[j] = V1[j];
    }
    while(1){
        p++;
        for(j = 0; j < n; j++){
            if(j < n/2){
                v1[j] = V1[j];
            }
            else{
                v2[j] = V1[j];
            }
        }
        
        for(j = 0; j < n; j++){
            if(j%2 == 0){
                V1[j] = v2[j];
            }
            else{
                V1[j] = v1[j];
            }
        }
        for(j = 0; j < n; j++){
            if(V1[j] == V2[j])
                m++;
        }
        if(m == n)
            break;
    }
    return p;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", shuffleDeck(n));

    return 0;
} //Incompleto
