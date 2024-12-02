#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int TAM = 100000;

void Insercao (int n, int v[]) {
    int i, j, x;
    for (j = 1; /*A*/ j < n; j++) {
        x = v[j];
        for (i = j-1; i >= 0 && v[i] > x; i--){
            v[i+1] = v[i];
            v[i+1] = x;
        }
    }
}

int main() {
    clock_t t, t1; //variável para armazenar tempo
    int vetor[TAM], n;

    //semente de aleatoriedade
    srand((unsigned)time(NULL));

    //geração aleatório dos valores do vetor
    for(int a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    t = clock(); //armazena tempo
    Insercao(TAM, vetor);
    t = clock() - t; //tempo final - tempo
    //imprime o tempo na tela
    printf("Tempo de execucao Insertionsort: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double


    return 0;
}
