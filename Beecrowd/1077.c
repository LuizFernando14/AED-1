#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int TAM = 100000;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3; 
    return 0;
}

int is_right_associative(char op) {
    return op == '^';
}

char *InfixaParaPosfixa(char infix[]) {
    char *posfix, x, *p;
    int n, i, j, t;
    n = strlen(infix);

    posfix = malloc((n + 1) * sizeof(char)); 
    p = malloc(n * sizeof(char)); 

    t = 0;
    j = 0;

    for (i = 0; i < n; i++) {
        char current = infix[i];

        if (current == ' ' || current == '\t') {
            continue; 
        }

        switch (current) {
            case '(':
                p[t++] = current; 
                break;
            case ')':
                while (t > 0 && p[t - 1] != '(') {
                    x = p[--t];
                    posfix[j++] = x;
                }
                t--; 
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (t > 0 && (precedence(p[t - 1]) > precedence(current) || 
                                 (precedence(p[t - 1]) == precedence(current) && !is_right_associative(current)))) {
                    x = p[--t];
                    posfix[j++] = x; 
                }
                p[t++] = current;
                break;
            default:
                posfix[j++] = current;
                break;
        }
    }

    
    while (t > 0) {
        x = p[--t];
        posfix[j++] = x;
    }

    posfix[j] = '\0'; 

    free(p);
    return posfix;
}

int main() {
    char infix[TAM];
    int n, i;

    scanf("%d", &n);
    getchar(); 

    for (i = 0; i < n; i++) {
        fgets(infix, TAM, stdin);
        infix[strcspn(infix, "\n")] = 0;

        char *result = InfixaParaPosfixa(infix);
        printf("%s\n", result);
        free(result);
    }

    return 0;
}
