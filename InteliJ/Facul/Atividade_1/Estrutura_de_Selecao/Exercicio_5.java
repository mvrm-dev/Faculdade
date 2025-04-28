package Estrutura_de_Selecao;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Exercicio_5 {
    public static void main(String[]args ) throws IOException {

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        System.out.print("Digite uma idade: ");
        int idade = Integer.parseInt(in.readLine());

        if (idade >= 5 && idade <=7){ System.out.println("Infantil A"); }

        else if (idade >= 8 && idade <= 10) { System.out.println("Infantil B"); }

        else if (idade >= 11 && idade <= 13) { System.out.println("Juvenil A"); }

        else if (idade >= 14 && idade <=17) { System.out.println("Juvenil B"); }

        else { System.out.println("Adulto"); }


    }
}