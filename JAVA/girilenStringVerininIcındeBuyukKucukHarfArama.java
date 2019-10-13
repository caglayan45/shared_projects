package nypquiz4;

import java.util.Scanner;

public class NypQuiz4 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String kelime="";
        System.out.println("Bir cümle giriniz : ");
        kelime = sc.nextLine();
        
        int bSayisi=0,kSayisi=0,rSayisi=0;
        char x;
        
        for (int i = 0; i < kelime.length(); i++) {
            x=kelime.charAt(i);
            if(x >= 65 && x <= 90)
                bSayisi++;
            else if(x >= 97 && x <= 122)
                kSayisi++;
            else if(x >= 48 && x <= 122)
                rSayisi++;
        }
        System.out.println("Büyük harf sayısı : " + bSayisi);
        System.out.println("Küçük harf sayısı : " + kSayisi);
        System.out.println("Rakam sayısı : " + rSayisi);
    }
}