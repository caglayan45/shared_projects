package GalaxyZ;

public class AlfaRobot implements Alfa{
    static int binaSayiyi = 0;

    public void BinaYap(){
        binaSayiyi++;
        System.out.println("Bina Oluşturuldu.");
    }

    void Bilgi(){
        System.out.println("-----------------------------------------------");
        System.out.println("Bu robotun görevi bina yapmak.");
        System.out.println("Boyu : " + boy);
        System.out.println("Şuana kadar oluşturduğu bina sayısı : " + binaSayiyi);
        System.out.println("-----------------------------------------------");
    }

}
