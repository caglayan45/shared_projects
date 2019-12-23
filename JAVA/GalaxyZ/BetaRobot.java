package GalaxyZ;

public class BetaRobot implements Beta{

    static int agacSayisi = 0;

    public void AgacDik(){
        agacSayisi++;
        System.out.println("Ağaç Dikildi.");
    }

    void Bilgi(){
        System.out.println("***********************************************");
        System.out.println("Bu robotun görevi ağaç dikmek.");
        System.out.println("Boyu : " + boy);
        System.out.println("Şuana kadar diktiği ağaç sayısı : " + agacSayisi);
        System.out.println("***********************************************");
    }

}
