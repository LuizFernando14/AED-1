#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);
    if(x%2 == 1){
        printf("%d casas brancas e %d casas pretas\n", (x*x/2)+1, x*x/2);
    }
    else{
        printf("%d casas brancas e %d casas pretas\n", x*x/2, x*x/2);
    }
 
    return 0;
}
