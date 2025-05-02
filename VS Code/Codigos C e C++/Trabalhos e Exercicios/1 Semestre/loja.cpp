#include <iostream>

int main()
{   
    float saldo = 0, limiteChequeEspecial = 800.00, rendimento;
    char nomeCliente[20], saqueOuDeposito, chequeEspecial;
    int numeroConta;

    // Criar Cliente
    printf("digite o nome do cliente\n");
    scanf(" %[^\n]*c ",&nomeCliente);

    printf("digite o número da conta do cliente\n");
    scanf("%d",&numeroConta);

    // Verificar Cheque Especial
    printf("O cliente tem direito a cheque especial?\n");
    
    scanf(" %c",&chequeEspecial);
    if (chequeEspecial == 's'|| chequeEspecial == 'S'){saldo += limiteChequeEspecial;;}
    else if (chequeEspecial =='n'|| chequeEspecial =='N'){printf("nao tem");}
    else{printf("verifique sua digitação");}
    /*************************************************/

    while (true){   
    printf("O que deseja fazer?\n[1]Criar novo cliente [2]Verificar Saldo [3]Saque/Depósito [4]Aplicar dinheiro [5]Aquisição de cartão de crédito [6]Pagar fatura do cartão [7]Sair\n");
    int escolha;
    scanf("%d",&escolha);
    
    // [1] Mudar dados do Cliente
    if (escolha == 1){
    printf("digite o novo nome do cliente\n");
    scanf(" %[^\n]*c",&nomeCliente);

    printf("digite o novo número da conta do cliente\n");
    scanf("%d",&numeroConta);

    // Cheque Especial
    printf("O novo cliente tem direito a cheque especial?");
    scanf(" %c",&chequeEspecial);
    if (chequeEspecial == 's'|| chequeEspecial =='S'){saldo += limiteChequeEspecial;}
    else if (chequeEspecial =='n'|| chequeEspecial =='N'){printf("nao tem");}
    else{printf("verifique sua digitação");}
    }
    
    // [3] Saque / Deposito
    if (escolha == 3){
    printf("deseja sacar ou depositar?\nSaque (S) Deposito (D)");
    scanf(" %c",&saqueOuDeposito);
    
    if (saqueOuDeposito == 'S'|| saqueOuDeposito =='s')
    {
        printf("Quanto deseja sacar?\n");
        float saque;
        scanf("%f",&saque);
        
        if (saque>saldo)
        {
            printf("voce está tentando sacar mais do que tem");
        }
        else
        {
        saldo -= saque; 
        }
    }
    
    else if (saqueOuDeposito == 'd'|| saqueOuDeposito == 'D')
    {
        printf("quanto deseja depositar?\n");
        float deposito;
        scanf("%f",&deposito);

        saldo += deposito;
    }
    
    else{printf("verifique sua digitação");}
    /*************************************************/    
    }

    // [4] Aplicação Financeira
    if (escolha == 4){
        if (saldo>0){
            printf("Deseja aplicar em Fundos?\n Sim (S) | Não (N)");
            char escolhaFundo;
            scanf(" %c",&escolhaFundo);
            if (escolhaFundo == 's'|| escolhaFundo =='S'){
            if (chequeEspecial == 's'|| chequeEspecial =='S'){printf("Voce não pode usar o saldo do cheque para comprar uma aplicação");}
            else{
                rendimento += saldo * 0.5;
                }
            }
        }
    }
    /*************************************************/
    if (escolha == 7){system("cls"); return false;} 

    /*************************************************/
    
    // [2] Saldo
    if (escolha == 2){
    printf("\n-Saldo Cliente: R$%.2f\n", saldo);
    printf("-Limite de Cheque Especial: R$%.2f\n",limiteChequeEspecial);
    printf("====================================\n");
    printf("-Saldo para Saque: R$%.2f\n",limiteChequeEspecial);
    printf("-Rendimento: R$%.2f\n",rendimento);
    }
    /*************************************************/
    if (escolha == 5){
        
    }
}
  
}
