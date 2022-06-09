#include <stdio.h>

void primParte(char *emails, int *TAM){
    int i;
    
    for(i = 0; i < 50 || emails[i] == 'FIM'; i++){
        if(emails[i] == '@'){
            i++;
            while(emails[i] != '.'){
                printf("%c", emails[i]);
                i++;
            }
        }
    }
}

int main(){
    int TAM = 50;
    char emails[TAM];

    fgets(emails, 50, stdin);
    
    primParte(emails, &TAM);
    

    return 0;
}