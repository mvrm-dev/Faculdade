package Aula_03_12_25;

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class Aluno {

    //atributos da classe
    private String nome;
    private String endereco;
    private String ra;

    public void preencher() throws IOException{

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        System.out.print("Digite seu nome: ");
        nome = in.readLine();
        System.out.print("Digite seu endereço: ");
        endereco = in.readLine();
        System.out.print("Digite seu ra: ");
        ra = in.readLine();

    }

    public void exibir(){

        System.out.println("Nome: "+nome+"\nEndereço: "+endereco+"\nRA: "+ra);

    }
}
