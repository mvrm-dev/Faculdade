#include <stdio.h>

int main (){
int acao, escolha;
    printf("Acao 1\nAcao 2\nAcao 3\n");
    scanf("%d",&escolha);

while (escolha != 0){
    
    if (escolha == 1){
        printf("Você escolheu a Ação %d\n", escolha);
    }
    else if(escolha == 2){
         printf("Você escolheu a Ação %d\n", escolha);
    }
    else if (escolha == 3){
         printf("Você escolheu a Ação %d\n", escolha);
    }
    else {
       printf("Você escolheu a Ação %d Ela nao e valida\n", escolha); 
    }
    printf("Acao 1\nAcao 2\nAcao 3\n");
    scanf("%d",&escolha);

    
}



return 0;
}