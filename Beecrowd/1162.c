#include <stdio.h>
#include <stdlib.h>

int bubbleSort (int v[], int TAM) {
    int a, b, aux, t = 0;
    for (a=0; a<=TAM-2; a++) {
        for (b=a+1; b<=TAM-1; b++) {
            if (v[a]>v[b]) {
                aux = v[a];
                v[a] = v[b];
                v[b] = aux;
                t++;
            }
        }
    }
    return t;
}

int main() {
    int n, V[50], k;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        for(int j = 0; j < k; j++){
            scanf("%d", &V[j]);
        }
        printf("Optimal train swapping takes %d swaps.\n", bubbleSort(V, k));
    }

    return 0;
}
