#include <stdio.h>
const int TAM = 100000;

void bubbleSort (int E[], int O[], int l, int m) {
    int a, b, aux;
    for (a=l-1; a>=1; a--) {
        for (b=0; b<a; b++) {
            if (E[b]>E[b+1]) {
                aux = E[b];
                E[b] = E[b+1];
                E[b+1] = aux;
            }
        }
    }

    for (a=m-1; a>=1; a--) {
        for (b=0; b<a; b++) {
            if (O[b]>O[b+1]) {
                aux = O[b];
                O[b] = O[b+1];
                O[b+1] = aux;
            }
        }
    }
}

int main() {
    int n, i=0, l=0, m=0, N, E[TAM], O[TAM], V[TAM];
    scanf("%d", &N);
    while(i < N){
        scanf("%d", &n);
        V[i] = n;
        i++;
    }

    for(i = 0; i < N; i++){
        if(V[i]%2 == 0){
            E[l] = V[i];
            l++;
        }
        else{
            O[m] = V[i];
            m++;
        }
    }

    bubbleSort(E, O, l, m);
    for(i = 0; i < l; i++){
        printf("%d\n", E[i]);
    }
    for(i = m-1; i >= 0; i--){
        printf("%d\n", O[i]);
    }


    return 0;
}
