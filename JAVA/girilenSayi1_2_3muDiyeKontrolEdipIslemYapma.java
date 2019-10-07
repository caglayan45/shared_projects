package nesneyeyonelikorneksorular;

import java.util.Scanner;


public class NesneyeYonelikOrnekSorular {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int s=0,n=0,toplamSonuc=0,carpimSonuc=1;
        
        System.out.print("Bir sayı giriniz : ");
        n=sc.nextInt();
        
        System.out.print("1-3 arasında bir tamsayı giriniz : ");
        s=sc.nextInt();
        
        switch(s){
            case 1:for (int i=1; i<=n; i++) {
                    toplamSonuc+=i;
                }System.out.println("Toplam = " + toplamSonuc);break;
            case 2:for (int i=1; i<=n; i++) {
                    carpimSonuc*=i;
                }System.out.println("Çarpım = " + carpimSonuc);break;
            case 3:System.out.println("3'ün Katları;");
            for (int i=1; i<=n; i++) {
                    if(i%3==0)
                        System.out.println(i);
                };break;
            default:System.out.println("Yanlış değer girdiniz.");
        }
        
        
        
        
    }
    
}
