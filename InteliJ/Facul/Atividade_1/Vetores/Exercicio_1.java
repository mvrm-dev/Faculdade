package Vetores;

import java.util.Scanner;

public class Exercicio_1 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] vetor = new int[10];

        System.out.println("Digite 10 números: ");

        for (int i = 0; i < 10; i++) {
            vetor[i] = scanner.nextInt();
        }

        for (int i = 0; i < 10; i++) {
            if (vetor[i] % 2 != 0) {
                System.out.println(vetor[i] + " É impar");
            }
        }

        scanner.close();
    }
}



