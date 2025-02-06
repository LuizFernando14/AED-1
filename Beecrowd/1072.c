#include <stdio.h>

int main(){
    int n, s, in = 0, out = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &s);
        if(s >= 10 && s <= 20)
            in++;
        else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    
    return 0;
}
