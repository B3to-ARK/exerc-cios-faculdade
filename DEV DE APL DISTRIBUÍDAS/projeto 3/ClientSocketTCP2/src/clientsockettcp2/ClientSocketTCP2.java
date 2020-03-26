/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package clientsockettcp2;

import java.io.EOFException;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.net.UnknownHostException;
import modelos.Pessoa;

/**
 *
 * @author anderson0563
 */
public class ClientSocketTCP2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Socket s = null;
        try {
            int portaDoServidor = 8000;
            String enderecoDoServidor = "127.0.0.1";
            s = new Socket(enderecoDoServidor, portaDoServidor);
            ObjectOutputStream out = new ObjectOutputStream(s.getOutputStream());
            Pessoa p = new Pessoa();
            p.nome="Anderson";
            p.email="asantos@unicarioca.edu.br";
            out.writeObject(p);
        } catch (UnknownHostException e) {
            System.out.println("Sock:" + e.getMessage());
        } catch (EOFException e) {
            System.out.println("EOF:" + e.getMessage());
        } catch (IOException e) {
            System.out.println("IO:" + e.getMessage());
        } finally {
            if (s != null) {
                try {
                    s.close();
                } catch (IOException e) {
                    System.out.println("close:" + e.getMessage());
                }
            }
        }
    }
    
}
