#include <iostream>
#include <sstream>
#include <vector>

//tá feio bagarai, mas tá funcionando, fiz na correria prof, perdão, caso queira me dar alguma dica ou fazer algum comentário, sinta-se livre para mandar uma msg no teams
// ou até msm conversar na fatec

void media(int elementos,const std::vector<int> &vec);
void variancia(int med, int elementos,const std::vector<int> &vec);

void media(int elementos,const std::vector<int> &vec){
    int media = 0;
    int temp = 0;

    for(int i = 0; i < vec.size()-1; i++){
        temp += vec[i];
    }
    media = temp/elementos;
    
    std::cout << "Media: " << media << std::endl;

    variancia(media, elementos, vec);
}

void variancia(int med, int elementos,const std::vector<int> &vec){
    double somaQuadrados = 0.0;

    // Calcular a soma dos quadrados das diferenças
    for(int i = 0; i < vec.size(); i++) {
        double diferenca = vec[i] - med;
        somaQuadrados += diferenca * diferenca;
    }

    // Calcular a variância
    double variancia = somaQuadrados / elementos;

    std::cout << "variancia: " << variancia << std::endl;
}


int main(void){

    std::vector<int> vec;

    while(true){
        int escolha;

        std::cout << "1-Informar numeros\n2-Calcular\n3-Sair\nDigite Sua escolha: " << std::endl;
        std::cin >> escolha;
        
        std::cin.ignore();
        if(escolha == 1){

            std::cin.ignore();
            std::string text_line = "";
            std::getline(std::cin, text_line);
            std::istringstream input_stream(text_line);
            
            int str_to_num;

            while (input_stream >> str_to_num){
                vec.push_back(str_to_num);
            }

        }
        else if(escolha == 2){

            if(size(vec) == 0){
                std::cout << "Informe os números do vetor primeiro"<< std::endl;
            }

            else{ media(vec.size()-1,vec); }
            
        }
        else if (escolha == 3) { 
            
            vec.clear();
            vec.shrink_to_fit();

            break;
        }
        else{ std::cout << "Verifique as opcoes novamente" << std::endl; }
    }   

    return 0;
}
