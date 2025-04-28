package Vetores;

import java.util.Scanner;

public class Exercicio_3 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int[] vetorOriginal = new int[10];
        int[] vetorInvertido = new int[10];

        System.out.println("Digite 10 números inteiros: ");
        for (int i = 0; i < 10; i++) {
            vetorOriginal[i] = scanner.nextInt();
        }

        for (int i = 0; i < 10; i++) {
            vetorInvertido[i] = vetorOriginal[9 - i];
        }

        System.out.println("Vetor invertido: ");

        for (int num : vetorInvertido) {
            System.out.print(num + " ");
        }

        scanner.close();
    }
}
