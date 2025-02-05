#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int  media, nota1, nota2;
    scanf("%d", &nota1);
    scanf("%d", &media);
    nota2 = (2*media) - nota1;
    printf("%d\n", nota2);

    return 0;
}
