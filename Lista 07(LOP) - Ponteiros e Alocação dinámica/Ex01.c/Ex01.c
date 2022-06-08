#include <stdio.h>

int main(){
    char emails[10][50];
    int i, j;

    for(j = 0; j < 10 || emails[j] == 'FIM'; j++){
        fgets(emails, 10, stdin);
        printf("%s\n", emails[j]);
    }

/*    for(i = 0; i < 50; i++){
        if(emails[i] == '@'){
            i++;
            while(emails[i] != '.'){
                printf("%c", emails[i]);
                i++;
            }
        }
    } 
*/
    return 0;
}