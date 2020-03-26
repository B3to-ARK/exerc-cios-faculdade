/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package serversockettcp2;

import java.io.EOFException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.net.ServerSocket;
import java.net.Socket;
import modelos.Pessoa;

/**
 *
 * @author anderson0563
 */
public class ServerSocketTCP2 {

    /**
     * @param args the command line arguments
     * @throws java.lang.ClassNotFoundException
     */
    public static void main(String[] args) throws ClassNotFoundException {
       Socket clientSocket = null;
        try {
            int serverPort = 8000;
            ServerSocket listenSocket = new ServerSocket(serverPort);
            clientSocket = listenSocket.accept();
            ObjectInputStream in = new ObjectInputStream(clientSocket.getInputStream());
            Pessoa p  = (Pessoa) in.readObject();
            System.out.println("Nome: " + p.nome + " Email: " + p.email);
        } catch (EOFException e) {
            System.out.println("EOF:" + e.getMessage());
        } catch (IOException e) {
            System.out.println("IO:" + e.getMessage());
        } finally {
            try {
                if (clientSocket != null) {
                    clientSocket.close();
                }
            } catch (IOException e) {

            }
        }
    }
    
}
