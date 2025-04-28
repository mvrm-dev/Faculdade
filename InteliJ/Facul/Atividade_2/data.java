import java.time.LocalDate;
import javax.swing.JOptionPane;

public class data {

    private int dia;
    private int mes;
    private int ano;


    public data(int dia, int mes, int ano){

        this.dia = dia;
        this.mes = mes;
        this.ano = ano;

    }

    public data(){

        LocalDate dataAtual = LocalDate.now();
        this.dia = dataAtual.getDayOfMonth();
        this.mes = dataAtual.getMonthValue();
        this.ano = dataAtual.getYear();

    }

    public int getDia(){
        return dia;
    }

    public void setDia(int dia){
        this.dia = dia;

    }

    public int getMes(){
        return mes;

    }

    public void setMes(int mes){
        this.mes = mes;

    }

    public int getAno(){
        return ano;

    }

    public void setAno(int ano){
        this.ano = ano;

    }

    public String exibirData(){
        return dia + "/" + mes + "/" + ano;

    }


    public static void main(String []args){


        int dia = Integer.parseInt(JOptionPane.showInputDialog("Digite o dia:"));
        int mes = Integer.parseInt(JOptionPane.showInputDialog("Digite o mes:"));
        int ano = Integer.parseInt(JOptionPane.showInputDialog("Digite o ano:"));

        //criando data informada -> isntanciando os atributos
        data dataInformada = new data(dia,mes,ano);

        JOptionPane.showMessageDialog(null, "Data Informada" + dataInformada.exibirData());

        //criando data atual -> sem instanciar os valores
        data dataAtual = new data();

        JOptionPane.showMessageDialog(null, "Data Informada" + dataInformada.exibirData());

    }
}
