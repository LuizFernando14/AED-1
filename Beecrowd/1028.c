#include <stdio.h>
#include <math.h>

int main() {
    int N, F1, F2, m, j = 0;
    scanf("%d", &N);
    while(j < N){
        scanf("%d%d", &F1, &F2);
        for(int i = 1; i <= (F1+F2+abs(F1-F2))/2; i++){
            if(F1%i == 0 && F2%i == 0)
                m = i;
        }
        printf("%d\n", m);
        j++;
    }

    return 0;
}
