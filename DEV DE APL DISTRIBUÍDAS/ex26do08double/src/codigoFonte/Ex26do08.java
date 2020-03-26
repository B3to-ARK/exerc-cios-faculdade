package codigoFonte;

import java.util.Scanner;


public class Ex26do08 {
    public static void main(String args[]) {
        
        double a;
        double b;
        
        System.out.print("Entre com numero:");
        double n = (new Scanner(System.in)).nextLong();
        
        System.out.print("digite o numero de threads:");
        int c = (new Scanner(System.in)).nextInt();
        
         switch(c){
            case 1:
                Ex26do08Thread t1 = new Ex26do08Thread(0, n);
                t1.start();
                while (t1.isAlive());
                System.out.println(t1.S);
                break;
                
                
            case 2:
                t1 = new Ex26do08Thread(0, Math.floor(n/2));
                Ex26do08Thread t2 = new Ex26do08Thread(Math.floor(n/2), n);
                t1.start();
                t2.start();
                while (t1.isAlive() && t2.isAlive());
                System.out.println(t2.S);
            break;
                
                
                case 4:
                    t1 = new Ex26do08Thread(0, Math.floor(n/4));
                    t2 = new Ex26do08Thread(Math.floor(n/4), Math.floor(n/2));
                    Ex26do08Thread t3 = new Ex26do08Thread(Math.floor(n/2), Math.floor((3*n)/4));
                    Ex26do08Thread t4 = new Ex26do08Thread(Math.floor((3*n)/4), n);
                    t1.start();
                    t2.start();
                    t3.start();
                    t4.start();
                    while (t1.isAlive() && t2.isAlive() && t3.isAlive() && 
                           t4.isAlive());
                    System.out.println(t4.S);
                break;
                        
                    
                case 8:
                    t1 = new Ex26do08Thread(0, Math.floor(n/8));
                    t2 = new Ex26do08Thread(Math.floor(n/8), Math.floor(n/4));
                    t3 = new Ex26do08Thread(Math.floor(n/4), Math.floor((3*n)/8));
                    t4 = new Ex26do08Thread(Math.floor((3*n)/8), Math.floor(n/2));
                    Ex26do08Thread t5 = new Ex26do08Thread(Math.floor(n/2), Math.floor(5*n)/8);
                    Ex26do08Thread t6 = new Ex26do08Thread(Math.floor((5*n)/8), Math.floor((3*n)/4));
                    Ex26do08Thread t7 = new Ex26do08Thread(Math.floor((3*n)/4), Math.floor((7*n)/8));
                    Ex26do08Thread t8 = new Ex26do08Thread(Math.floor((7*n)/8), n);    
                    t1.start();
                    t2.start();
                    t3.start();
                    t4.start();
                    t5.start();
                    t6.start();
                    t7.start();
                    t8.start();
                    while(t1.isAlive() && t2.isAlive() && t3.isAlive() && 
                        t4.isAlive() && t5.isAlive() && t6.isAlive() && 
                        t7.isAlive() && t8.isAlive());
                    System.out.println(t8.S);
                break;
                        
                        
  
       }
    }
}  