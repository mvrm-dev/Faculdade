package Estrutura_Sequencial;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_2 {
    public static void main(String[]args) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        double cm_para_polegadas = 2.54;

        System.out.print("quantas polegadas deseja converter em cm: ");
        int polegadas = Integer.parseInt(in.readLine());

        System.out.println("conversão: "+(polegadas * cm_para_polegadas));
    }
}
