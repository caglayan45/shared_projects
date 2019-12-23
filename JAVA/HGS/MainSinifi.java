package HGS;

public class MainSinifi {

    public static void main(String[] args) {

        HgsSinifi arac1 = new HgsSinifi("16 KM 891", 1);
        HgsSinifi arac2 = new HgsSinifi("16 JZ 4552", 2);

        arac1.Gecis(15);
        arac1.Bilgi();

        arac1.BakiyeYukle(100);
        arac1.UcretGuncelle(1,3);
        arac1.Bilgi();

        arac1.Gecis(20);
        arac1.Bilgi();

        arac2.Gecis(20);
        arac2.BakiyeYukle(50);
        arac2.Bilgi();

        HgsSinifi arac3 = new HgsSinifi("35 AL 0442", 3);
        arac3.Gecis(10);
        arac3.Bilgi();

        arac3.BakiyeYukle(150);
        arac3.Bilgi();

        arac3.Gecis(30);
        arac3.Bilgi();

    }

}
