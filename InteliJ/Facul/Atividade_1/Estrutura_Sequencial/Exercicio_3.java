package Estrutura_Sequencial;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_3 {
    public static void main(String[]args ) throws IOException{

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        double porcent_distribuidor = 0.28;
        double porcent_imposto = 0.45;

        System.out.print("Digite o valor do carro a ser orçado: ");
        double valor_carro = Double.parseDouble(in.readLine());

        System.out.println("Valor final do carro: "+(valor_carro + (valor_carro * (porcent_imposto + porcent_distribuidor))));
    }
}
