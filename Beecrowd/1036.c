#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, delta, R1, R2;
    scanf("%f%f%f", &A, &B, &C);
    delta = (B*B)-(4*A*C);
    if(delta < 0 || A == 0)
        printf("Impossivel calcular\n");
    else{
        R1 = (-B + sqrt(delta))/(2*A);
        R2 = (-B - sqrt(delta))/(2*A);
        printf("R1 = %.5f\nR2 = %.5f\n", R1, R2);
    }

    return 0;
}
