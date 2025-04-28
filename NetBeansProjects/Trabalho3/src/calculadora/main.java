package calculadora;

import javax.swing.JOptionPane;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author evilk
 */
public class main {
    
    public static void main(String []args){
        jframe();
    }
    
    public static void jframe(){
        jframe_design calcJFrame = new jframe_design();
        calcJFrame.setVisible(true);
        calcJFrame.setLocationRelativeTo(null);
        calcJFrame.pack();
        
    }
    
    public static void calc(int peso, int option){
        double gTerra = 9.81;
        double resultado;
        
        switch (option) {
            case 1 -> resultado = peso * (3.7/gTerra);
            case 2 -> resultado = peso * (8.8/gTerra);
            case 3 -> resultado = peso * (3.8/gTerra);
            case 4 -> resultado = peso * (26.4/gTerra);
            case 5 -> resultado = peso * (11.5/gTerra);
            case 6 -> resultado = peso * (11.7/gTerra);
                
            default -> throw new AssertionError();
                
        }
        
        JOptionPane.showMessageDialog(null,String.format("%.2f kg",resultado));

    } 
}
