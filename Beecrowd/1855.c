#include <stdio.h>
 
int main() {
    int w, h;
    scanf("%d", &w);
    scanf("%d", &h);
    if(w < 100 && h < 100){
        int MAP1[h][w], m = 0;
        char MAP2[h][w];
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                scanf("%c", &MAP2[i][j]);
                MAP1[i][j] = 0;
                if(MAP2[i][j] == '*')
                    m++;
            }
        }
        if(m != 1){
            printf("!\n");
            break;
        }
        j = 0;
        i = 0;
        while(i >= 0 && i < h && j >= 0 && j < w){
            int n;
            switch(MAP2[i][j]){
                case '*':
                    printf("*\n");
                    break;
                case '>':
                    j++;
                    n = 1;
                case '<':
                    j--;
                    n = 2;
                case '^':
                    i--;
                    n = 3;
                case 'v':
                    i++;
                    n = 4;
                case '.':
                    if(n == 1)
                        j++;
                    else if(n == 2)
                        j--;
                    else if(n == 3)
                        i--;
                    else if(n == 4)
                        i++;
            }
        }
        
    }
    
 
    return 0;
}
