package Estrutura_de_Selecao;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_3 {

    public static void main(String[]args ) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int usuario;
        double valor_compra;

        System.out.print("Digite o valor da compra: ");
        valor_compra = Double.parseDouble(in.readLine());

        System.out.println("Informe seu status\n1-Cliente comum\n2-Funcionário\n3-VIP");
        usuario = Integer.parseInt(in.readLine());

        if(usuario == 1){
            System.out.println("Valor Total da compra: R$"+valor_compra);
        }
        else if(usuario == 2){
            System.out.println("Desconto de funcionário aplicado");
            System.out.println("Valor Total da compra: R$"+(valor_compra-(valor_compra * 0.1)));
        }
        else if(usuario == 3){
            System.out.println("Desconto VIP aplicado");
            System.out.println("Valor Total da compra: R$"+(valor_compra-(valor_compra * 0.05)));
        }
        else {
            System.out.println("Verifique novamente as opções");
        }

    }
}