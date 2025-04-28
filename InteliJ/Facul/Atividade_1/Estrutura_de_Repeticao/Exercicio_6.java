package Estrutura_de_Repeticao;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Exercicio_6 {
    public static void main(String[]args)throws IOException{

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int fatorial = 1;

        System.out.println("Digite qual fatorial deseja saber");
        int num_inicial = Integer.parseInt(in.readLine());

        for(int i = num_inicial; i >1; i--){

            fatorial *= i;
        }

        System.out.println("fatorial de: "+num_inicial+" é "+fatorial);



    }
}
