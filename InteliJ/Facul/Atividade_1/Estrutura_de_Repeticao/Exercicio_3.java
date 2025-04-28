package Estrutura_de_Repeticao;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Exercicio_3 {
    public static void main(String[]args)throws IOException{

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int soma = 0;

        System.out.println("Digite o número inicial");
        int num_1 = Integer.parseInt(in.readLine());

        System.out.println("Digite o número de delimitação");
        int num_2 = Integer.parseInt(in.readLine());

        for(int i = num_1; i <= num_2; i++){

            soma += i;
        }

        System.out.println("Soma Total: "+soma);



    }
}
