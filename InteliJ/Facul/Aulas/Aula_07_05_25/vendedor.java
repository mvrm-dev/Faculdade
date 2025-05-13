public class vendedor extends empregado {
    private float comissao;

    public vendedor(String nome, double salario, float comissao) {
        super(nome, salario);
        this.comissao = comissao;

    }

    public float getComissao() {
        return comissao;
    }

    public void setComissao(float comissao) {
        this.comissao = comissao;
    }
}
