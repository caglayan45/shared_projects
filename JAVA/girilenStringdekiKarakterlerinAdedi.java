package nyp_quiz5;

import java.util.Scanner;

public class Nyp_quiz5 {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String cumle="";
        System.out.print("Bir cümle giriniz : ");
        cumle=sc.nextLine();
        
        int buyuk=0,kucuk=cumle.length()+1;
        int k=0;
        char karakter;
        String[][] dizi = new String[cumle.length()][2];
        
        for (int i = 0; i < dizi.length; i++) {
            dizi[i][1]="0";
        }
        
        for (int i = 0; i < cumle.length(); i++) {
            karakter=cumle.charAt(i);
            for (int j = 0; j < dizi.length; j++) {
                if(Character.toString(karakter).equals(dizi[j][0])){
                    k++;
                    int b = Integer.parseInt(dizi[j][1]);
                    b++;
                    dizi[j][1] = Integer.toString(b);
                }
            }
            if(k==0){
                dizi[i][0]=Character.toString(karakter);
                dizi[i][1]="1";
            }else
                k=0;
        }
        
        
        
        for (int i = 0; i < dizi.length; i++) {
            if (Integer.parseInt(dizi[i][1]) > buyuk) {
                buyuk = Integer.parseInt(dizi[i][1]);
            }
            if (Integer.parseInt(dizi[i][1])!=0 && Integer.parseInt(dizi[i][1]) < kucuk) {
                kucuk = Integer.parseInt(dizi[i][1]);
            }
        }
        
        
        
        for (int j = 0; j < dizi.length; j++) {
            if(dizi[j][0] != null)
                System.out.println(dizi[j][0] + " karakteri " + dizi[j][1] + " adet kullanılmış.");
        }
        
        System.out.println("Frekans Farkı : " + (buyuk - kucuk));
        
    }
}
