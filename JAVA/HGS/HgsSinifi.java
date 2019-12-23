package HGS;

class HgsSinifi {

    private String aracPlakasi;
    private int aracTipi, kartBakiye, aracNumarasi, toplamOdeme;
    private static int tipBirUcret = 2, tipIkiUcret = 4, tipUcUcret = 7, kartNumarasi = 0;


    HgsSinifi(String plaka,int tip){
        kartBakiye = 150;
        aracPlakasi = plaka;
        aracTipi = tip;
        aracNumarasi = ++kartNumarasi;
        toplamOdeme = 0;
        System.out.println("---------------------------------");
        System.out.println("Aracın plakası : " + aracPlakasi);
        System.out.println("Kart numarası : " + aracNumarasi);
        System.out.println("Ödenen toplam miktar : " + toplamOdeme);
        System.out.println("Bakiye : " + kartBakiye);
        System.out.println("---------------------------------");
    }

    void Gecis(int kilometre){
        switch(aracTipi){
            case 1:
                kartBakiye -= (tipBirUcret * kilometre);
                toplamOdeme += (tipBirUcret * kilometre);
                System.out.println(aracPlakasi + " geçiş sonrası bakiyeniz : " + kartBakiye);
                break;
            case 2:
                kartBakiye -= (tipIkiUcret * kilometre);
                toplamOdeme += (tipIkiUcret * kilometre);
                System.out.println(aracPlakasi + " geçiş sonrası bakiyeniz : " + kartBakiye);
                break;
            case 3:
                kartBakiye -= (tipUcUcret * kilometre);
                toplamOdeme += (tipUcUcret * kilometre);
                System.out.println(aracPlakasi + " geçiş sonrası bakiyeniz : " + kartBakiye);
                break;
        }
    }

    void BakiyeYukle(int bakiye){
        kartBakiye += bakiye;
        System.out.println("Yeni bakiyeniz : " + kartBakiye);
    }

    void UcretGuncelle(int tip, int yeniUcret){
        switch(tip){
            case 1:
                tipBirUcret = yeniUcret;
                System.out.println("Tip 1 yeni ücret : " + tipBirUcret);
                break;
            case 2:
                tipIkiUcret = yeniUcret;
                System.out.println("Tip 2 yeni ücret : " + tipIkiUcret);
                break;
            case 3:
                tipUcUcret = yeniUcret;
                System.out.println("Tip 3 yeni ücret : " + tipUcUcret);
                break;
            default:
                System.out.println("Böyle bir tip bulunmamaktadır.");
        }
    }

    void Bilgi(){
        System.out.println("---------------------------------");
        System.out.println("Aracın plakası : " + aracPlakasi);
        System.out.println("Kart numarası : " + aracNumarasi);
        System.out.println("Ödenen toplam miktar : " + toplamOdeme);
        System.out.println("Bakiye : " + kartBakiye);
        System.out.println("---------------------------------");
    }

    void KayitSil(String plaka){
        aracPlakasi = "";
        toplamOdeme = 0;
        kartBakiye = 0;
        aracTipi = -1;
        kartNumarasi--;
        aracNumarasi = -1;
    }
}
