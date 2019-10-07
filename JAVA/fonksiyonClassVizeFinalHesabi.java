package metoddeneme;

import java.util.Scanner;

public class MetodDeneme {

    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int vizeNotu=0,finalNotu=0;
        
        System.out.println("Vize notunu giriniz : ");
        vizeNotu=sc.nextInt();
        
        System.out.println("Final notunu giriniz : ");
        finalNotu=sc.nextInt();
        
        //metod ile hesaplama
        System.out.println("Ortalamanız = " + finalHesabi(vizeNotu, finalNotu));
        
        //class ile hsaplama(vizeFinalHesabi classını çağırıyoruz)
        System.out.println("Ortalamanız = " + vizeFinalHesabi.hesapla(vizeNotu, finalNotu));
    }
    
    //metod
    public static double finalHesabi(int vize,int finl){
        
        double sonuc=0,vizeHesap=0,finalHesap=0;
        
        vizeHesap=vize*0.4;
        finalHesap=finl*0.6;
        sonuc = vizeHesap+finalHesap;
        
        return sonuc;
    }
    
}
