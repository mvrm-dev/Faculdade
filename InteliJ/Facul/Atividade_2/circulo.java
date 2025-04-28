public class circulo {

    private double raio;
    final double pi = 3.1416;

    //Get e Set raio
    public double getRaio(){
        return 0;
    }

    public void setRaio(double raio){
        this.raio = raio;
    }

    //Construtor-circulo
    public circulo(double raio) {
        this.raio = raio;

    }

   public double getArea(){

        return pi * (raio*raio);

   }

    public double getCircunferencia(){

        return 2 * pi * raio;
    }

    public void aumentarRaio( double percentual){

        raio += raio * (percentual/100.0);

    }

    public static void main(String []args){

        circulo c1 = new circulo(5);

        System.out.println("Raio inicial: " + c1.getRaio());
        System.out.println("Área: " + c1.getArea());
        System.out.println("Circunferência: " + c1.getCircunferencia());

        // Aumentando o raio em 20%
        c1.aumentarRaio(20);

        // Exibindo novos valores
        System.out.println("\nApós aumentar o raio em 20%:");
        System.out.println("Novo raio: " + c1.getRaio());
        System.out.println("Nova área: " + c1.getArea());
        System.out.println("Nova circunferência: " + c1.getCircunferencia());


    }


}
