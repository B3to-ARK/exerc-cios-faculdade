/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clientesocketfibonacci;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;

/**
 *
 * @author 04279207798
 */
public class ClienteSocketFibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        Socket s = new Socket("127.0.0.1", 4000);
        DataOutputStream out = new DataOutputStream(s.getOutputStream());
        System.out.println("Conectado ao servidor " + s.getInetAddress() + " na porta " + s.getPort());
        out.writeInt(7);
        System.out.println("Dado enviado com sucesso");
    }
    
}
