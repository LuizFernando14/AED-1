#include <stdio.h>
#include <string.h>

typedef struct {
    char amigo[20];
    char namigo[20];
} allFriends;

typedef struct {
    struct allFriends[1000];
    char amg[20];
} cList;

int main() {
    char *amigos, *namigos, *amg;
    gets(amigos);
    gets(namigos);
    gets(amg);
    int i = 0, k = 0;
    while(amigos[i] != '\0'){
        if(amigos[i] == ' '){
            i++;
            k++;
            continue;
        }
        else{
            cList.allFriends[k].amigo[i] = amigos[i];
        }
    }
    int i = 0, k = 0;
    while(namigos[i] != '\0'){
        if(namigos[i] == ' '){
            i++;
            k++;
            continue;
        }
        else{
            nList.allFriends[k].namigo[i] = namigos[i];
        }
    }
    int i = 0, k = 0;
    while(amg[i] != '\0'){
        
        cList.allFriends[k].amg[i] = amigos[i];
        nList.allFriends[k].amg[i] = amigos[i];
    }
 
    return 0;
} // Incompleto
