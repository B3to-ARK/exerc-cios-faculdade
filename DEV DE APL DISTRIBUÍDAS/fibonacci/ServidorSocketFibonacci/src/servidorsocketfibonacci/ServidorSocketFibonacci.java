/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package servidorsocketfibonacci;

import java.io.DataInputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

/**
 *
 * @author 04279207798
 */
public class ServidorSocketFibonacci {

    public static int fibonacci(int n){
        if(n==0 || n==1) return n;
        return fibonacci(n-1)+ fibonacci(n-2);
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        ServerSocket server = new ServerSocket(4000);
        System.out.println("Servidor online...");
        Socket clienteConectado = server.accept();
        DataInputStream in = new DataInputStream(clienteConectado.getInputStream());
        int n = in.readInt();
        System.out.println("Servidor recebeu " + n + " do cliente " + clienteConectado.getInetAddress() + " pela porta " + clienteConectado.getPort());
        System.out.println("{usando os métodos da classe Socket}");
        System.out.println("Fibonacci de " + n + " vale " + fibonacci(n));
        clienteConectado.close();
        System.out.println("Servidor desconectado");
    }
    
}
