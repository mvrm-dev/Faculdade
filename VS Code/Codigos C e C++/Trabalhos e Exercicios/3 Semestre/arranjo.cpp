#include <iostream>

int calc_fatorial(int);
int calc_arranjo(int, int);

int calc_fatorial(int fatorial){

    if (fatorial == 0){
        return 1;
    }
    else{
        return fatorial * calc_fatorial(fatorial-1);
    }

}

int calc_arranjo(int fatorial, int arranjo){

    int conta_fatorial = calc_fatorial(fatorial); //formula fatorial - n!

    int conta_arranjo = calc_fatorial((fatorial - arranjo)); //formula arranjo - (n-k)!

    return (conta_fatorial / conta_arranjo); //calculo arranjo - n! / (n-k)!
}

int main(void){ 
    int num_fatorial, num_arranjo, escolha;
   
    while (true){

        std::cout << "\n1-Fatorial\n2-Arranjo\n3Fatorial e Arranjo\n0-Sair\nEscolha um calculo: " << std::endl;
        std::cin >> escolha;

        if (escolha == 0){
            break;
        }

        else if (escolha == 1){
            std::cin >> num_fatorial;
            std::cout << "Fatorial de "<< num_fatorial <<": "<< calc_fatorial(num_fatorial) << std::endl;
        }
        
        else if (escolha == 2){
            std::cout << "Digite o numero de elementos e o numero do arranjo: ";

            std::cin >> num_fatorial;
            std::cin >> num_arranjo;
            
            std::cout << "Arranjo de " << num_fatorial << " em " << num_arranjo << ": " << calc_arranjo(num_fatorial,num_arranjo);
        }
        

    }
    
    return 0;
}