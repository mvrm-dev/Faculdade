public class empregado extends pessoa{

    private double salario;
    private int matricula;

    public empregado(String nome, char sexo, int idade, double salario, int matricula){
        super(nome,sexo,idade);
        this.salario = salario;
        this.matricula = matricula;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }
}
