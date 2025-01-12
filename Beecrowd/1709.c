#include <stdio.h>
#include <stdlib.h>

int shuffleDeck(int n){
    int V1[n], V2[n], j, V3[n], p = 0, half = n/2;
    for(j = 0; j < half; j++){
        V1[2*j] = (2*j)+1;
        V1[(2*j)+1] = (2*j)+2;
        V2[2*j] = V1[2*j];
        V2[(2*j)+1] = V1[(2*j)+1];
        V3[2*j] = V2[2*j];
        V3[(2*j)+1] = V2[(2*j)+1];
    }
    while(1){
        p++;
        if(p%2 == 1){
            for(j = 0; j < half; j++){
                    V1[2*j] = V2[half+j];
                    V1[(2*j)+1] = V2[j];
            }
            for(j = 0; j < half; j++){
                    if(V1[2*j] != V3[2*j] || V1[(2*j)+1] != V3[(2*j)+1])
                        break;
            }
        }
        else{
            for(j = 0; j < half; j++){
                    V2[2*j] = V1[half+j];
                    V2[(2*j)+1] = V1[j];
            }
            for(j = 0; j < half; j++){
                    if(V2[2*j] != V3[2*j] || V2[(2*j)+1] != V3[(2*j)+1])
                        break;
            }
        }
        if(j == half)
            break;
    }
    return p;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", shuffleDeck(n));
    return 0;
}//Incompleto
