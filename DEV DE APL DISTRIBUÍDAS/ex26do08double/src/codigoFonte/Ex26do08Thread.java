
package codigoFonte;

public class Ex26do08Thread extends Thread{ 
    
    private double a, b;
    public double S = 0;
    
    public Ex26do08Thread(double a, double b){
        this.a = (double) a;
        this.b = (double) b;
    }
   

    public double Soma(double a, double b){
       for(double i=a; i<b; i++)
           S+=i;
       return S;
    }
        
    @Override
    public void run() {
      S = Soma(a, b); 
    }

   
   
}
