#include <stdio.h>
 
int main() {
    int n1, n2, V[7] = {100, 50, 20, 10, 5, 2, 1};
    do {
        scanf("%d", &n1);
    } while(n1<=0 || n1>=1000000);
    n2 = n1;
    printf("%d\n", n1);
    for(int i = 0; i < 7; i++){
        printf("%d nota(s) de R$ %d,00\n", n2/V[i], V[i]);
        n2%=V[i];
    }
 
    return 0;
}
