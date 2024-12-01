#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
const TAM = 10000;

int main() {
    int N, T, i=0, num, num2;
    char V[TAM];
    scanf("%d", &N);
    getchar();
    while(i < N){
        fgets(V, TAM, stdin);
        num = atoi(V);
        T = 0;
        for(int k = 1; k < strlen(V); k++){
            num2 = num%10;
            switch(num2){
                case 0:
                T+=6;
                break;

                case 1:
                T+=2;
                break;

                case 2:
                T+=5;
                break;

                case 3:
                T+=5;
                break;

                case 4:
                T+=4;
                break;

                case 5:
                T+=5;
                break;

                case 6:
                T+=6;
                break;

                case 7:
                T+=3;
                break;

                case 8:
                T+=7;
                break;

                case 9:
                T+=6;
                break;


            }
            num /= 10;
        }
        printf("%d leds\n", T);
        i++;
    }

    return 0;
}
