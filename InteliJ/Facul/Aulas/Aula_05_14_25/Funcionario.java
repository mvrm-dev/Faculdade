package Aula_05_14_25;

public class Funcionario {

    private Endereco endereco;
    private String nome;
    private double salario;

    public Funcionario(String nome, double salario, Endereco endereco){
        this.endereco = endereco;
        this.salario = salario;
        this.nome = nome;
    }

    public Aula_05_14_25.Endereco getEndereco() {
        return endereco;
    }

    public void setEndereco(Aula_05_14_25.Endereco endereco) {
        this.endereco = endereco;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
}
