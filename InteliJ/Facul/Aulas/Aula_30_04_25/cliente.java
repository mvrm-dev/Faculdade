public class cliente extends pessoa{

    private int numeroConta;
    private double saldo;

    public cliente(String nome, String cpf,int numeroConta, double saldo){
        super(nome,cpf);
        this.numeroConta = numeroConta;
        this.saldo = saldo;
    }
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public int getNumeroConta() {
        return numeroConta;
    }

    public void setNumeroConta(int numeroConta) {
        this.numeroConta = numeroConta;
    }


}
