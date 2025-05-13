public class cliente extends pessoa{
    private double valorDivida;
    private int anoNascimento;

    public cliente(String nome, char sexo, int idade, double valorDivida, int anoNascimento) {
        super(nome, sexo, idade);
        this.anoNascimento = anoNascimento;
    }

    public double getValorDivida() {
        return valorDivida;
    }

    public void setValorDivida(double valorDivida) {
        this.valorDivida = valorDivida;
    }

    public int getAnoNascimento() {
        return anoNascimento;
    }

    public void setAnoNascimento(int anoNascimento) {
        this.anoNascimento = anoNascimento;
    }
}
