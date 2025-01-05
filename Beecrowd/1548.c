#include <stdio.h>
#include <stdlib.h>

void bubbleSort (int v[], int TAM) {
    int a, b, aux;
    for (a=0; a<=TAM-2; a++) {
        for (b=a+1; b<=TAM-1; b++) {
            if (v[a]<v[b]) {
                aux = v[a];
                v[a] = v[b];
                v[b] = aux;
            }
        }
    }
}

int main() {
    int n, V1[1000], V2[1000], k, j;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int t = 0;
        scanf("%d", &k);
        for(j = 0; j < k; j++){
            scanf("%d", &V1[j]);
            V2[j] = V1[j];
        }
        bubbleSort(V1, k);
        for(j = 0; j < k; j++){
            if(V1[j] == V2[j])
                t++;
        }
        printf("%d\n", t);
    }

    return 0;
}
