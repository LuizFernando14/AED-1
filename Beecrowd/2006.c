#include <stdio.h>
 
int main() {
    int T, V[5], n = 0;
    scanf("%d", &T);
    for(int i = 0; i < 5; i++){
        scanf("%d", &V[i]);
        if(V[i] == T)
            n++;
    }
    printf("%d\n", n);
 
    return 0;
}
