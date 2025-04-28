/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package loginscreenc;
    
import javax.swing.JOptionPane;

/**
 *
 * @author Marcos
 */
public class LoginScreenC {
     
       public static void main(String[] args) {
        
        jframe();
    }
    
    public static void jframe(){
        
        LoginJFrame loginFrame = new LoginJFrame();
        loginFrame.setVisible(true);
        loginFrame.pack();
        //loginFrame.setLocationRelativeTo(null);
    }
    
    public static void compare(String usr, String passw){
        String AdminUser = "admin";
        String AdminPassword = "abc123";
        
        if(AdminUser.equals(usr) && AdminPassword.equals(passw)){
            JOptionPane.showMessageDialog(null, "Acesso Liberado");
        }
        else{
            JOptionPane.showMessageDialog(null, "Acesso Negado");

        }
      
    }   
    
}
