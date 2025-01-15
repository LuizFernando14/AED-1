#include <stdio.h>
 
int main() {
    int w, h, i, j;
    scanf("%d", &w);
    scanf("%d", &h);
    getchar();
    if(w < 100 && h < 100){
        int MAP1[h][w], m = 0;
        char MAP2[h][w];
        for(i = 0; i < h; i++){
            for(j = 0; j < w; j++){
                scanf("%c", &MAP2[i][j]);
                if(MAP2[i][j] == '\n') j--;
                else{
                MAP1[i][j] = 0;
                if(MAP2[i][j] == '*')
                    m++;
                }
            }
        }
        j = 0;
        i = 0;
        if(m != 1){
            printf("!\n");
        }
        else{
            int n = 0;
            while(i >= 0 && i < h && j >= 0 && j < w){
                if(MAP1[i][j] != 0){
                    printf("!\n");
                    break;
                }
                else{
                    MAP1[i][j] += 1;
                    switch(MAP2[i][j]){
                        case '*':
                            printf("*\n");
                            return 0;
                        case '>':
                            j++;
                            n = 1;
                            break;
                        case '<':
                            j--;
                            n = 2;
                            break;
                        case '^':
                            i--;
                            n = 3;
                            break;
                        case 'v':
                            i++;
                            n = 4;
                            break;
                        case '.':
                            if(n == 1)
                                j++;
                            else if(n == 2)
                                j--;
                            else if(n == 3)
                                i--;
                            else if(n == 4)
                                i++;
                            break;
                    }
                }
            }
        }
        if(i < 0 || i >= h || j < 0 || j >= w)
            printf("!\n");
    }
    
    return 0;
} //Incompleto
