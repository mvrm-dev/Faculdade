package Estrutura_de_Selecao;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_2 {

    public static void main(String[]args ) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int num_macas;

        System.out.println("Digite os dois números a serem comparados: ");
        num_macas = Integer.parseInt(in.readLine());

        double resultado = (num_macas < 12) ? num_macas * 1.30 : num_macas * 1.0;

        System.out.println("valor total a pagar: R$"+resultado);

    }
}