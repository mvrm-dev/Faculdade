package Vetores;

import java.util.Scanner;

public class Exercicio_2 {

    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            double[] vetor = new double[6];

            double soma = 0;

            System.out.println("Digite os números reais a serem somados no vetor:");
            for (int i = 0; i < 6; i++) {
                vetor[i] = scanner.nextDouble();
                soma += vetor[i];
            }

            double media = soma / 6;

            double maior = vetor[0];
            double menor = vetor[0];

            for (int i = 1; i < 6; i++) {
                if (vetor[i] > maior) {
                    maior = vetor[i];
                }
                if (vetor[i] < menor) {
                    menor = vetor[i];
                }
            }
            System.out.println("Média: " + media+"\nMaior valor: " + maior+"\nMenor valor: " + menor);

            scanner.close();
        }
    }


