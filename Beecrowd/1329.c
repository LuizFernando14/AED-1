#include <stdio.h>

int main() {
    int n, M, J, i, l;
    while(1){
        i = 1;
        J = 0;
        M = 0;
        scanf("%d", &n);
        getchar();
        if(n == 0)
            break;
        for(i; i <= n; i++){
            scanf("%d", &l);
            if(l)
                J+=1;
            else{
                M+=1;
            }
        }
        printf("Mary won %d times and John won %d times\n", M, J);
    }

    return 0;
}
