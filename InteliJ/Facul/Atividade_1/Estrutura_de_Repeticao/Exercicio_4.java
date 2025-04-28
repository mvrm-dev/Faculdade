package Estrutura_de_Repeticao;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_4 {
    public static void main(String[]args ) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int num_lido, maior_num = 0, soma_total = 0;

        System.out.println("Digite os dois números a serem comparados: ");
        for (int i = 0; i < 15; i++){
            num_lido = Integer.parseInt(in.readLine());

            if (num_lido > maior_num){
                maior_num = num_lido;
            }
            soma_total += num_lido;

        }
        System.out.println("Maior número: "+maior_num+"\nMédia aritmética: "+(soma_total/15));
    }
}