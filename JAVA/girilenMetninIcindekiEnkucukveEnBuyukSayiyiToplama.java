
package quiz4_ikinciogretim;

import java.util.ArrayList;
import java.util.Scanner;

public class Quiz4_ikinciOgretim {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        System.out.println("Bir cümle giriniz : ");
        String kelime="",sayi="0";
        kelime = sc.nextLine();
        
        int k,kucuk=0,buyuk=0;
        char x;
        
        for (int i = 0; i < kelime.length(); i++) {
            x=kelime.charAt(i);
            k=i;
            while(x >= 48 && x <= 57){
                i=k;
                sayi += x;
                k++;
                if (k<kelime.length()) 
                    x=kelime.charAt(k);
                else
                    break;
            }
            if (Integer.parseInt(sayi) != 0) 
                list.add(Integer.parseInt(sayi));
            sayi="0";
        }
        System.out.println("");
        System.out.println(list);
        
        kucuk=list.get(0);
        for (int i = 0; i < list.size(); i++) 
            if (list.get(i) < kucuk) 
                kucuk=list.get(i);
        
        buyuk=list.get(0);
        for (int i = 0; i < list.size(); i++) 
            if (list.get(i) > buyuk) 
                buyuk=list.get(i);
        System.out.println("En küçük ile en büyüğün toplamı = " + (kucuk + buyuk));
    }
}