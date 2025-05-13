public class vendedor extends empregado{
    private double valorDeVendas;
    private int numVendas;

    public vendedor(String nome, char sexo, int idade, double salario, int matricula,double valorDeVendas, int numVendas) {
        super(nome, sexo, idade, salario, matricula);
        this.valorDeVendas = valorDeVendas;
        this.numVendas = numVendas;
    }

    public double getValorDeVendas() {
        return valorDeVendas;
    }

    public void setValorDeVendas(double valorDeVendas) {
        this.valorDeVendas = valorDeVendas;
    }

    public int getNumVendas() {
        return numVendas;
    }

    public void setNumVendas(int numVendas) {
        this.numVendas = numVendas;
    }
}
