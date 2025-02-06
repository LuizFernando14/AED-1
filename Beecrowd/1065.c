#include <stdio.h>

int main(){
    int n, s, m = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &s);
        if(s%2 == 0)
            m++;
    }
    printf("%d valores pares\n", m);
    
    return 0;
}
