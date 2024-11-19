#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

int const TAM = 60000; //constante para tamanho do vetor

void bubbleSort (int v[TAM]) {
    int a, b, aux;
    for (a=TAM-1; a>=1; a--) {
        for (b=0; b<a; b++) {
            if (v[b]>v[b+1]) {
                aux = v[b];
                v[b] = v[b+1];
                v[b+1] = aux;
            }
        }
    }
}

int BuscaSequencial (int x, int n, int v[]) {
    int j = 0;
    while (j < n && v[j] < x) ++j;
        return j;
}

int BuscaBinR (int x, int e, int d, int v[]) {
    if (e == d-1)
        return d;
    else {
        int m = (e + d)/2;
        if (v[m] < x)
            return BuscaBinR (x, m, d, v);
        else{
            return BuscaBinR (x, e, m, v);
        }
    }
}

int main(){
    clock_t t, t1; //variável para armazenar tempo
    int vetor[TAM], n;

    //semente de aleatoriedade
    srand((unsigned)time(NULL));

    //geração aleatório dos valores do vetor
    for(int a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;
    scanf("%d", &n);

    bubbleSort(vetor);
    t = clock(); //armazena tempo
    printf("Posicao 1: %d\n", BuscaSequencial(n, TAM, vetor));
    t = clock() - t; //tempo final - tempo

    t1 = clock(); //armazena tempo
    printf("Posicao 2: %d\n", BuscaBinR(n, -1, TAM, vetor));
    t1 = clock() - t1; //tempo final - tempo

    //imprime o tempo na tela
    printf("Tempo de execucao BuscaSequencial: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
    printf("Tempo de execucao BuscaBinR: %lf ms\n", ((double)t1)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
