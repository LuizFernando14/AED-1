#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char V[21];
    int n;
    fgets(V, 21, stdin);
    n = strlen(V);
    if(n >= 10){
        printf("palavrao\n");
    }
    else{
        printf("palavrinha\n");
    }

    return 0;
}
