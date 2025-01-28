#include <stdio.h>
#include <stdlib.h>

void iccanobif(int n, int j, int k){
    if(n == 1)
        return;
    else{
        int x = j;
        x += k;
        k = j;
        j = x;
        iccanobif(n-1, j, k);
        printf("%d ", x);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    iccanobif(n, 1, 0);
    printf("1\n");

    return 0;
}
