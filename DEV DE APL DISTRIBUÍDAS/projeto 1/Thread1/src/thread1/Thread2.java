/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package thread1;

import java.lang.management.ManagementFactory;
import java.lang.management.ThreadMXBean;
import java.util.Scanner;

/**
 *
 * @author root
 */
public class Thread2 {
    @SuppressWarnings("empty-statement")
    public static void main(String args[]) {
        double S;
        System.out.println("DAD'17 - Projeto 1 - 2 Threads");
        System.out.print("Entre com n:");
        double n = (new Scanner(System.in)).nextDouble();
        ThreadMXBean thMxB = ManagementFactory.getThreadMXBean();
        long t0 = thMxB.getCurrentThreadCpuTime();
        /*
        ThreadSoma ts1 = new ThreadSoma(0, Math.floor(n/2));
        ThreadSoma ts2 = new ThreadSoma(Math.floor(n/2), n);
        ts1.start();
        ts2.start();
        */
        
        ThreadSoma ts1 = new ThreadSoma(0, Math.floor(n/4));
        ThreadSoma ts2 = new ThreadSoma(Math.floor(n/4), Math.floor(n/2));
        ThreadSoma ts3 = new ThreadSoma(Math.floor(n/2), Math.floor((3*n)/4));
        ThreadSoma ts4 = new ThreadSoma(Math.floor((3*n)/4), n);
        ts1.start();
        ts2.start();
        ts3.start();
        ts4.start();
       
        /*
        ThreadSoma ts1 = new ThreadSoma(0, Math.floor(n/8));
        ThreadSoma ts2 = new ThreadSoma(Math.floor(n/8), Math.floor(n/4));
        ThreadSoma ts3 = new ThreadSoma(Math.floor(n/4), Math.floor((3*n)/8));
        ThreadSoma ts4 = new ThreadSoma(Math.floor((3*n)/8), Math.floor(n/2));
        ThreadSoma ts5 = new ThreadSoma(Math.floor(n/2), Math.floor(5*n)/8);
        ThreadSoma ts6 = new ThreadSoma(Math.floor((5*n)/8), Math.floor((3*n)/4));
        ThreadSoma ts7 = new ThreadSoma(Math.floor((3*n)/4), Math.floor((7*n)/8));
        ThreadSoma ts8 = new ThreadSoma(Math.floor((7*n)/8), n);    
        ts1.start();
        ts2.start();
        ts3.start();
        ts4.start();
        ts5.start();
        ts6.start();
        ts7.start();
        ts8.start();
        */
        /*
        while(ts1.isAlive() && ts2.isAlive());
        */
        
        while(ts1.isAlive() && ts2.isAlive() && ts3.isAlive() && ts4.isAlive());
        
        /*
        while(ts1.isAlive() && ts2.isAlive() && ts3.isAlive() && ts4.isAlive() && ts5.isAlive() && ts6.isAlive() && ts7.isAlive() && ts8.isAlive());
        */
        long t1 = thMxB.getCurrentThreadCpuTime();
        System.out.println("Tempo de execução: " + (t1 - t0) / 1000000000. + "s");
    }    
}
