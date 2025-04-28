package Vetores;

import java.util.Scanner;

public class Exercicio_4 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int[] vetor = new int[10];
        int soma = 0;

        System.out.println("Digite 10 números inteiros:");

        for (int i = 0; i < 10; i++) {
            vetor[i] = scanner.nextInt();
        }

        for (int i = 0; i < 10; i += 2) {
            if (vetor[i] > 0) {
                soma += vetor[i];
            }
        }

        System.out.println("Soma dos elementos positivos nas posições pares: " + soma);

        scanner.close();
    }
}
