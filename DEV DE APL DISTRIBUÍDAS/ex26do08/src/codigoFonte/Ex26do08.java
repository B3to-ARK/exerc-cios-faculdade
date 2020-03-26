package codigoFonte;

import java.util.Scanner;


public class Ex26do08 {
    public static void main(String args[]) {
        
        long a;
        long b;
        
        System.out.print("Entre com numero:");
        long n = (new Scanner(System.in)).nextLong();
        
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
                for(int i = 0; i<c; i++){
                    switch(i) {
                    case 0:
                        a = (long) Math.floor(n/2);
                        t1 = new Ex26do08Thread(0, a);
                        t1.start();
                        break;
                    case 1:
                        a = (long) Math.floor(n/2);
                        Ex26do08Thread t2 = new Ex26do08Thread(a, n);
                        t2.start();
                        while (t2.isAlive());
                        System.out.println(t2.S);
                        break;
                    }
                }
                break;
                
                
                case 4:
                    for(int i = 0; i<c; i++){
                        switch(i) {
                        case 0:
                            a = (long) Math.floor(n/4);
                            t1 = new Ex26do08Thread(0, a);
                            t1.start();
                            break;
                        case 1:
                            a = (long) Math.floor(n/4);
                            b =  (int) Math.floor(n/2);
                            Ex26do08Thread t2 = new Ex26do08Thread(a, b);
                            t2.start();
                            break;
                        case 2:
                            a = (long) Math.floor(n/2);
                            b =  (int) Math.floor((3*n)/4);
                            Ex26do08Thread t3 = new Ex26do08Thread(a, b);
                            t3.start();
                            break;
                        case 3:
                            a = (long) Math.floor((3*n)/4);
                            b =  (long) Math.floor(n);
                            Ex26do08Thread t4 = new Ex26do08Thread(a, b);
                            t4.start();
                            while (t4.isAlive());
                            System.out.println(t4.S);
                            break;
                        }
                    }
                    break;
                    
                    
                    case 8:
                        for(int i = 0; i<c; i++){
                            switch(i) {
                            case 0:
                                a = (long) Math.floor(n/8);
                                t1 = new Ex26do08Thread(0, a);
                                t1.start();
                                break;
                            case 1:
                                a = (long) Math.floor(n/8);
                                b =  (long) Math.floor(n/4);
                                Ex26do08Thread t2 = new Ex26do08Thread(a, b);
                                t2.start();
                                break;
                            case 2:
                                a = (long) Math.floor(n/4);
                                b =  (long) Math.floor((3*n)/8);
                                Ex26do08Thread t3 = new Ex26do08Thread(a, b);
                                t3.start();
                                break;
                            case 3:
                                a = (long) Math.floor((3*n)/8);
                                b =  (long) Math.floor(n/2);
                                Ex26do08Thread t4 = new Ex26do08Thread(a, b);
                                t4.start();
                                break;
                            case 4:
                                a = (long) Math.floor(n/2);
                                b =  (long) Math.floor((5*n)/8);
                                Ex26do08Thread t5 = new Ex26do08Thread(a, b);
                                t5.start();
                                break;
                            case 5:
                                a = (long) Math.floor((5*n)/8);
                                b =  (long) Math.floor((3*n)/4);
                                Ex26do08Thread t6 = new Ex26do08Thread(a, b);
                                t6.start();
                                break;
                            case 6:
                                a = (long) Math.floor((3*n)/4);
                                b =  (long) Math.floor((7*n)/8);
                                Ex26do08Thread t7 = new Ex26do08Thread(a, b);
                                t7.start();
                                break;
                            case 7:
                                a = (long) Math.floor((3*n)/4);
                                b =  (long) Math.floor((7*n)/8);
                                Ex26do08Thread t8 = new Ex26do08Thread(a, b);
                                t8.start();
                                while(t8.isAlive());
                                System.out.println(t8.S);
                                break;
                            }
                        }
                        break; 
       }
    }
}  