#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d%d", &X, &Y);
    switch(X)
    {
    case 1:
        printf("Total: R$ %d.00\n", Y*4);
        break;
    case 2:
        printf("Total: R$ %.2f\n", Y*4.5);
        break;
    case 3:
        printf("Total: R$ %d.00\n", Y*5);
        break;
    case 4:
        printf("Total: R$ %d.00\n", Y*2);
        break;
    case 5:
        printf("Total: R$ %.2f\n", Y*1.5);
        break;
    }

    return 0;
}
