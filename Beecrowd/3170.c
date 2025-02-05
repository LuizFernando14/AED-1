#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a == b/2 || a > b/2){
        printf("Amelia tem todas bolinhas!\n");
    }
    else{
        printf("Faltam %d bolinha(s)\n", (b/2)-a);
    }

    return 0;
}
