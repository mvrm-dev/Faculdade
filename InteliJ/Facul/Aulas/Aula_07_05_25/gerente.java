public class gerente extends empregado{

    private String departamento;

    public gerente(String nome, double salario, String departamento){
        super(nome,salario);
        this.departamento = departamento;

    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }




}
