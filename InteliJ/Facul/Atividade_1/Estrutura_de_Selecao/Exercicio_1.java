package Estrutura_de_Selecao;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_1 {
    public static void main(String[]args ) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int num_1, num_2;

        System.out.println("Digite os dois números a serem comparados: ");
        num_1 = Integer.parseInt(in.readLine());
        num_2 = Integer.parseInt(in.readLine());

        String resposta = (num_1 == num_2) ? "São iguais" : "Não são iguais";
        System.out.println(resposta);
    }
}