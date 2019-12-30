package NimGame;

import java.util.Scanner;

public class NimMain {

    public static void main(String[] args) {

        int satirNo = 0,cubukSayisi = 0;
        int sira = 1;

        Scanner sc = new Scanner(System.in);

        System.out.println("Oyun tahtası satır sayısı : ");
        int s = sc.nextInt();

        Tahta t = new Tahta(s);
        t.Ciz();

        while(t.GetToplamCubuk() > 0){
            sira++;
            if(sira % 2 == 0){
                System.out.println("Birinci oyuncu(satır numarası(1-" + s +")) :");
                satirNo = sc.nextInt();
                System.out.println("Birinci oyuncu(çekilecek çubuk sayısı(1-3)) :");
                cubukSayisi = sc.nextInt();
                if(!t.CubukAl(satirNo,cubukSayisi)) {
                    while (!t.CubukAl(satirNo, cubukSayisi)) {
                        System.out.println("Birinci oyuncu(satır numarası(1-" + s + ")) :");
                        satirNo = sc.nextInt();
                        System.out.println("Birinci oyuncu(çekilecek çubuk sayısı(1-3)) :");
                        cubukSayisi = sc.nextInt();
                    }
                }
            }else{
                System.out.println("İkinci oyuncu(satır numarası(1-" + s + ")) :");
                satirNo = sc.nextInt();
                System.out.println("İkinci oyuncu(çekilecek çubuk sayısı(1-3)) :");
                cubukSayisi = sc.nextInt();
                if(!t.CubukAl(satirNo,cubukSayisi)) {
                    while (!t.CubukAl(satirNo, cubukSayisi)) {
                        System.out.println("İkinci oyuncu(satır numarası(1-" + s + ")) :");
                        satirNo = sc.nextInt();
                        System.out.println("İkinci oyuncu(çekilecek çubuk sayısı(1-3)) :");
                        cubukSayisi = sc.nextInt();
                        t.CubukAl(satirNo, cubukSayisi);
                    }
                }
            }
        }

        if(sira % 2 != 0)
            System.out.println("Birinci oyuncu kazandı.");
        else
            System.out.println("İkinci oyuncu kazandı");

    }

}
