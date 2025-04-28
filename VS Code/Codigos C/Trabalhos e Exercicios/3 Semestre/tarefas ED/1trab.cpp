#include <iostream>
#include <thread>
#include <chrono>

// gostaria de ressaltar que eu acabei optando por escrever as mensagens sem acentuação porque o encoding do meu vscode não está 100% configurado 
// até tentei mudar o encode pra opção western que tecnicamente resolveria o problema de acentuação em conjunto com a lib locale.h
// mas ai o terminal integrado do vscode ficava zoado, vou tentar arrumar pra que em ambos funcione corretamente. 

using namespace std;

int main(void){

    int escolha;
    cout << "para prosseguir escolha uma das opcoes a seguir." << endl;
    cout << "Opcao 1" << endl << "Opcao 2" << endl << "Opcao 3" << endl << "0 Para sair do programa" << endl;

while (true){
    cin >> escolha;
    if (escolha == 0){
        cout<< "Saindo do programa" << endl;
        this_thread::sleep_for(chrono::seconds(1)); // sleep de 1 seg

        break;
    }
    else if (escolha > 0 && escolha < 4){
        cout << "Voce escolheu a Opcao " << escolha << endl;
    }

    else { cout << "Opcao inexistente, tente novamente" << endl; }
    
}
    return 0;
}