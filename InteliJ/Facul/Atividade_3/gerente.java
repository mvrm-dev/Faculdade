public class gerente extends empregado{

    private String nomeGerencia;

    public gerente(String nome, char sexo, int idade, double salario, int matricula, String nomeGerencia) {
        super(nome, sexo, idade, salario, matricula);
        this.nomeGerencia = nomeGerencia;
    }

    public String getNomeGerencia() {
        return nomeGerencia;
    }

    public void setNomeGerencia(String nomeGerente) {
        this.nomeGerencia = nomeGerencia;
    }
}
