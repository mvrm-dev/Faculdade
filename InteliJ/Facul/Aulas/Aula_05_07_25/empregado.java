public class empregado {
    private String nome;
    protected double salario;
    public empregado(String nome,double salario){
        this.nome = nome;
        this.salario = salario;

    }

    public empregado(){

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
