package Estrutura_de_Selecao;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_4 {

    public static void main(String[]args ) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        System.out.print("Digite sua nota da 1a prova: ");
        double nota_1 = Double.parseDouble(in.readLine());

        System.out.print("Digite a nota da sua 2a prova: ");
        double nota_2 = Double.parseDouble(in.readLine());

        double media_final = (nota_1 + nota_2)/2;

        if(media_final >= 6){
            System.out.println("Aprovado\nNota Final: "+media_final);
        }
        else {
            System.out.println("Recuperação+\nNota Final: "+media_final);
        }

    }
}