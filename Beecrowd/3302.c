#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &n);
        printf("resposta %d: %d\n", i+1, n);
    }

    return 0;
}
