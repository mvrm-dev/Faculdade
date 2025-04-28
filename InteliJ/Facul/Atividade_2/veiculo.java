public class veiculo {

    String modelo;
    String marca;
    int ano;
    String cor;
    double valor;

    public veiculo( String modelo, String marca, int ano, String cor, double valor){
       this.modelo = modelo;
       this.marca = marca;
       this.ano = ano;
       this.cor = cor;
       this.valor = valor;

    }


    public static void main(String []args){

        veiculo gol = new veiculo
                ("bolinha","Volksvagen",1995,"vermelho",13000.00);

    }

}