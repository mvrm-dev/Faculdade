package Estrutura_de_Selecao;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Exercicio_6 {
    public static void main(String[]args) throws IOException{

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        double valor_total;

        double val_gasolina = 3.30;
        double val_alcool = 2.90;

        System.out.print("Digite o número de litros a serem abastecidos: ");
        double num_litros = Double.parseDouble(in.readLine());

        System.out.println("Digite qual tipo de combustivel você deseja\n1-Gasolina\n2-Álcool");
        int codigo = Integer.parseInt(in.readLine());

        switch (codigo){
            case 1:
                if (num_litros <= 20){
                    valor_total = num_litros * val_gasolina;
                    System.out.println("Valor total com Desconto de 3%: R$"+ (valor_total - (valor_total * 0.03)));
                }
                else {
                    valor_total = num_litros * val_gasolina;
                    System.out.println("Valor total com Desconto de 5%: R$"+ (valor_total - (valor_total * 0.05)));
                }
                break;
            case 2:
                if (num_litros <= 20){
                    valor_total = num_litros * val_alcool;
                    System.out.println("Valor total com Desconto de 4%: R$"+ (valor_total - (valor_total * 0.04)));
                }
                else {
                    valor_total = num_litros * val_alcool;
                    System.out.println("Valor total com Desconto de 6%: R$"+ (valor_total - (valor_total * 0.06)));

                }
                break;
            default: System.out.println("Verifique novamente as opções de combustivel"); break;
        }

        }
    }

