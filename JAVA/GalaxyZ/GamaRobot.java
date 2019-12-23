package GalaxyZ;

public class GamaRobot implements Alfa,Beta{

    int boy = 200;
    static int binaSayisi = 0, agacSayisi = 0, gorev = 1;

    void Calis(){
        if(gorev == 1)
            AgacDik();
        else
            BinaYap();
    }

    void GorevDegistir(){
        if(gorev == 1){
            gorev = 2;
            System.out.println("Robotun yeni görevi bina yapmak.");
        }else{
            gorev = 1;
            System.out.println("Robotun yeni görevi ağaç dikmek.");
        }
    }

    void Bilgi(){
        System.out.println("===============================================");
        System.out.println("Bu robotun görevi hem ağaç dikmek hem de bina yapmak.");
        if(gorev == 1)
            System.out.println("Şuan ki görevi ağaç dikmek.");
        else
            System.out.println("Şuan ki görevi bina yapmak.");
        System.out.println("Boyu : "+boy);
        System.out.println("Şuana kadar diktiği ağaç sayısı : " + agacSayisi);
        System.out.println("Şuana kadar oluşturduğu bina sayısı : " + binaSayisi);
        System.out.println("===============================================");
    }


    public void BinaYap(){
        binaSayisi++;
        System.out.println("Bina oluşturuldu.");
    }

    public void AgacDik(){
        agacSayisi++;
        System.out.println("Ağaç dikildi.");
    }

}
