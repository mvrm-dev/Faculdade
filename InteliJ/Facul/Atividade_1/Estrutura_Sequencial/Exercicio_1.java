package Estrutura_Sequencial;

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Exercicio_1 {
    public static void main(String[] args) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        System.out.print("digite um número: ");
        int num = Integer.parseInt(in.readLine());

        System.out.println("Antecessor: " +(num-1)+"\nSucessor: " +(num+1));

    }


}