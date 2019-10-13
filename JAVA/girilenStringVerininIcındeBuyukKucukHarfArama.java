package nypquiz4;

import java.util.Scanner;

public class NypQuiz4 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String kelime="";
        System.out.println("Bir cümle giriniz : ");
        kelime = sc.nextLine();
        
<<<<<<< HEAD
        int bSayisi=0,kSayisi=0,rSayisi=0,bosluk=0,diger=0;
=======
        int bSayisi=0,kSayisi=0,rSayisi=0;
>>>>>>> 5e5f8e8936e6b417d928f2c86eb7a10781fcf488
        char x;
        
        for (int i = 0; i < kelime.length(); i++) {
            x=kelime.charAt(i);
            if(x >= 65 && x <= 90)
                bSayisi++;
            else if(x >= 97 && x <= 122)
                kSayisi++;
<<<<<<< HEAD
            else if(x >= 48 && x <= 57)
                rSayisi++;
            else if(x == ' ')
                bosluk++;
            else if(x == 'ç' || x == 'ğ' || x == 'ı' || x == 'ö' || x == 'ş' || x == 'ü')
                kSayisi++;
            else if(x == 'Ç' || x == 'Ğ' || x == 'İ' || x == 'Ö' || x == 'Ş' || x == 'Ü')
                bSayisi++;
            else
                diger++;
        }
        System.out.println("\nBüyük harf sayısı : " + bSayisi);
        System.out.println("Küçük harf sayısı : " + kSayisi);
        System.out.println("Rakam sayısı : " + rSayisi);
        System.out.println("Boşluk sayısı : " + bosluk);
        System.out.println("Diğer karakterlerin sayısı : " + diger);
=======
            else if(x >= 48 && x <= 122)
                rSayisi++;
        }
        System.out.println("Büyük harf sayısı : " + bSayisi);
        System.out.println("Küçük harf sayısı : " + kSayisi);
        System.out.println("Rakam sayısı : " + rSayisi);
>>>>>>> 5e5f8e8936e6b417d928f2c86eb7a10781fcf488
    }
}