#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c, d, e, total1, total2;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    total1 = (2*a+3*b+4*c+d)/10;
    printf("Media: %.1f\n", total1);
    if(total1 >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(total1 < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        total2 = (total1+e)/2;
        printf("Nota do exame: %.1f\n", e);
        if(total2 >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", total2);
    }
    
    return 0;
}
