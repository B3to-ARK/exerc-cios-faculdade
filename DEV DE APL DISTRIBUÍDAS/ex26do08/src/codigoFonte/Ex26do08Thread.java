
package codigoFonte;

public class Ex26do08Thread extends Thread{ 
    
    private long a, b;
    public long S = 0;
    
    public Ex26do08Thread(long a, long b){
        this.a = (long) a;
        this.b = (long) b;
    }
   

    public long Soma(long a, long b){
       for(long i=a; i<b; i++)
           S+=i;
       return S;
    }
        
    @Override
    public void run() {
      S = Soma(a, b); 
    }

   
   
}
