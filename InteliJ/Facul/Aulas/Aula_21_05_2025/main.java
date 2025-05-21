package Aula_21_05_2025;

public class main {

    public static void main(String[]args){

        Inquilino i = new Inquilino();

        i.setNome("jao");
        i.setCpf("43432523");
        i.setRenda(2024);
        i.setProfissao("batata");

        Contrato c = new Contrato();
        c.setData("22342");
        c.setInquilino(i);



    }

}
