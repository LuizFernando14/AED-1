#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b, v, n, q, i, c, j, k, m, mdc;
    scanf("%d %d", &n, &q);
    int V[n];
    for(i = 0; i < n; i++){
        scanf("%d", &V[i]);
    }
    for(i = 0; i < q; i++){
        scanf("%d %d %d", &k, &a, &b);
        getchar();
        if(k == 1)
            scanf("%d", &v);
        if(k == 2){
            j = 1;
            c = a-1;
            while(j <= V[c]){
                m = 0;
                c = a-1;
                while(j <= V[c] && c < b){
                    if(V[c]%j == 0){
                        m++;
                        c++;
                    }
                    else{
                        break;
                    }
                }
                if(m == (b-a)+1){
                    mdc = j;
                }
                j++;
            }
            printf("%d\n", mdc);
        }
        else if(k == 1){
            for(i = a-1; i < b; i++){
                V[i] += v;
            }
        }
    }

    return 0;
}
