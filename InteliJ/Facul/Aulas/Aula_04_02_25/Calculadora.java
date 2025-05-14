package Aula_04_02_25;

import javax.swing.*;

public class Calculadora {

    public static void main(String []args){

        valores c = new valores();

        c.valor1Set(Double.parseDouble(JOptionPane.showInputDialog("valor 1")));
        c.valor2Set(Double.parseDouble(JOptionPane.showInputDialog("valor 2")));


        double soma = c.valor1Get() + c.valor2Get();

        JOptionPane.showMessageDialog(null,soma);
    }



}