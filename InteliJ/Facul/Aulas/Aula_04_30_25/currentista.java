public class currentista extends cliente{
    private String chequeEspecial;

    public currentista(String nome, String cpf, int numeroConta, double saldo,String chequeEspecial){
        super(nome,cpf,numeroConta,saldo);
        this.chequeEspecial = chequeEspecial;

    }
    public String getChequeEspecial() {
        return chequeEspecial;
    }

    public void setChequeEspecial(String chequeEspecial) {
        this.chequeEspecial = chequeEspecial;
    }
}
