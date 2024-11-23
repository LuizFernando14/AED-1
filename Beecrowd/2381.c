#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Tstudents{
    char name[20];
}students[100];

void Organize(struct Tstudents students[], int n){
    int i, j, min, b;
    char x[20];
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++){
            b = 0;
            while(students[j].name[b] == students[min].name[b])
                b++;
            if(students[j].name[b] < students[min].name[b])
                min = j;
        }
        strcpy(x, students[i].name);
        strcpy(students[i].name, students[min].name);
        strcpy(students[min].name, x);
    }
}

int SeqSearch(struct Tstudents students[], int n, int x){
    int j = 0;
    while (j < n && strcmp(students[j].name, students[x].name) < 0)
        j++;
    return j;
}

int main(){
    char V[20];
    int num, nums, i, len, r;
    scanf("%d%d", &nums, &num);
    getchar();
    for(i = 0; i < nums; i++){
        fgets(V, 20, stdin);
        len = strlen(V);
        if (len > 0 && V[len - 1] == '\n')
            V[len - 1] = '\0';
        strcpy(students[i].name, V);
    }
    Organize(students, nums);
    r = SeqSearch(students, nums, num-1);
    for(i = 0; i < strlen(students[r].name); i++){
        printf("%c", students[r].name[i]);
    }
    printf("\n");

}
