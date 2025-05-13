#include <stdio.h>
#include <string.h>

int main(){
    char palavraSecreta[20];
    char chutes[20];

    int acertou = 0;
    int enforcou = 0;


    int tentativas = 0;

    sprintf(palavraSecreta, "MELANCIA");

    do  {

        for(int i = 0; i < strlen(palavraSecreta); i++){
            int achou = 0;

            for (int j = 0; j < tentativas; j++){
            
                if (chutes[j] ==  palavraSecreta[i]){
                    achou = 1;
                    break;
                }
                
            }

            if (achou){ printf("%c ", palavraSecreta[i]); }
            
            else { printf("_ "); }

            

        }
        printf("\n");

        char chute;
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;
        
    } while (!acertou && !enforcou);
    




    return 0;

}