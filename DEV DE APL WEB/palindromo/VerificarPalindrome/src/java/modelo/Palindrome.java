/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

/**
 *
 * @author 04279207798
 */
public class Palindrome {
    // exemplo: mussum
    // mussum mussum
    
    private String palavra;

    public Palindrome(String palavra) {
        this.palavra = palavra;
    }
    
    public boolean verificar(){
        StringBuilder p1 = new StringBuilder(this.palavra);
        p1 = p1.reverse();
        String palavra1 = this.palavra;
        String palavra2 = p1.toString();
        return palavra1.equals(palavra2);
    }
    
    public static void main(String[] args) {
        Palindrome testar = new Palindrome("mussxm");
        System.out.print(testar.verificar()?"":"Não ");
        System.out.print("é palindrome");
        Palindrome testar2 = new Palindrome("socorrammesubinoonibusemmarrocos");
        System.out.print(testar2.verificar()?"":"Não ");
        System.out.print("é palindrome");
    }
    
}
