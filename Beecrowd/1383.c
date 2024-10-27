/*
  * Nome: 1383.c
  * Descrição: Validação de Sudoku - Exercício 1383 do Beecrowd
  * Data: 26/10/2024
  * Resolvido por Luiz Fernando de Souza Silva
*/

#include <stdio.h>
#define TAM 9

int sudoku_valid(int sudoku[][TAM]){
    // Verificação das linhas e colunas da matriz sudoku.
    for(int k = 0; k < 9; k++){
        for(int i = 0; i < TAM-1; i++){
            for(int j = i+1; j < TAM; j++){
                if(sudoku[k][i] == sudoku[k][j] || sudoku[k][j]>9 || sudoku[k][j]<1) // Verifica todas as linhas
                    return 0;
            }
        }

        for(int i = 0; i < TAM-1; i++){
            for(int j = i+1; j < TAM; j++){
                if(sudoku[i][k] == sudoku[j][k] || sudoku[i][k]>9 || sudoku[i][k]<1) // Verifica todas as colunas
                    return 0;
            }
        }
    }
    // Verificação das submatrizes do sudoku
    for(int aux1 = 0; aux1 < 3; aux1++){
        for(int aux2 = 0; aux2 < 3; aux2++){
            int i=1, j=1;
            while(i%3 != 0 && j%3 != 0){
                for(int g = 3*aux1; g < 3*(aux1+1); g++){
                    for(int h = 3*aux2; h < 3*(aux2+1); h++){
                        for(i = 3*aux1; i < 3*(aux1+1); i++){
                            for(j = 3*aux2; j < 3*(aux2+1); j++){
                                if(g == i && h == j)
                                    continue;
                                else{
                                    if(sudoku[g][h] == sudoku[i][j])
                                        return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 1; // Retorna verdadeiro (1) se for uma solução.

}

int main(){
    int n;
    do{
    scanf("%d", &n); // Número de matrizes Sudoku para validação.
    } while(n<=0);

    for(int instancia = 1; instancia <= n; instancia++){
        int sudoku[TAM][TAM];
        for(int i = 0; i < TAM; i++){
            for(int j = 0; j < TAM; j++){
                scanf("%d", &sudoku[i][j]); // Input da matriz Sudoku.
            }
        }
        printf("Instancia %d\n", instancia);
        if(sudoku_valid(sudoku)){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
        printf("\n");
    }

    return 0;
}
