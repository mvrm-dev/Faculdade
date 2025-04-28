package Estrutura_de_Repeticao;


public class Exercicio_2 {
    public static void main(String[]args){

        for(int i = 0; i <= 38; i++){

            String resposta = (i %2 == 0) ? i+" É par" : i+" É impar";
            System.out.println(resposta);

        }
    }
}
