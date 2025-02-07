#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int TAM = 1000000;

int main() {
    int N, T, i = 0;
    char V[TAM];
    scanf("%d", &N);
    getchar();
    
    while (i < N) {
        fgets(V, TAM, stdin);
        
        T = 0;
        for (int k = 0; k < strlen(V) - 1; k++) { 
            char digit = V[k];
            switch (digit) {
                case '0':
                    T += 6;
                    break;
                case '1':
                    T += 2;
                    break;
                case '2':
                    T += 5;
                    break;
                case '3':
                    T += 5;
                    break;
                case '4':
                    T += 4;
                    break;
                case '5':
                    T += 5;
                    break;
                case '6':
                    T += 6;
                    break;
                case '7':
                    T += 3;
                    break;
                case '8':
                    T += 7;
                    break;
                case '9':
                    T += 6;
                    break;
            }
        }
        printf("%d leds\n", T);
        i++;
    }

    return 0;
}
