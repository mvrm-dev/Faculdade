package Estrutura_de_Repeticao;

public class Exercicio_5 {
    public static void main(String[]args){

        int altura_juca = 110, altura_chico = 150;
        int counter = 0;
        while (altura_juca < altura_chico){

            altura_juca +=3;

            altura_chico +=2;

            counter+=1;
        }

        System.out.println("São necessários "+counter+" anos para que juca seja maior que chico");

    }
}
