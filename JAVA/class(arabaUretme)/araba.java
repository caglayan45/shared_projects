package nyp_quiz_6;

public class araba {
    
    static private int kacTane=0;
    private int yil=0;
    private int hiz=0;
    private String model;
    private int yavaslamaAdedi;
    private int hizlanmaAdedi;
    
    
    araba(String model, int yil){
        this.model = model;
        this.yil = yil;
        this.hiz = 0;
        this.yavaslamaAdedi = 0;
        this.hizlanmaAdedi = 0;
        kacTane++;
    }
    
    araba(String model, int yil, int hiz){
        this.model = model;
        this.yil = yil;
        this.hiz = hiz;
        kacTane++;
    }
    
    void bilgi(){
        System.out.println("Hızlanma adedi : " + hizlanmaAdedi);
        System.out.println("Yavaşlama adedi : " + yavaslamaAdedi);
        System.out.println("Hızı : " + hiz);
        System.out.println("Modeli " + model);
        System.out.println("Yılı : " + yil);
        System.out.println("-------------------------------------");
    }
    
    static void adet(){
        System.out.println("Üretilen araba sayısı : " + kacTane);
    }
    
    int getYil(){
        return yil;
    }
    
    void hizlan(){
        if(hiz + 5 <= 210){
            hizlanmaAdedi++;
            hiz+=5;
            System.out.println(model + " arabası hızlandı.");
            System.out.println("Şimdiki hızı : " + hiz);
            System.out.println("-------------------------------------");
        }else{
            System.out.println("Araba Hızlanmadı.");
            System.out.println("Şimdiki hızı : " + hiz);
            System.out.println("Hızlanma adedi : " + hizlanmaAdedi);
            System.out.println("-------------------------------------");
        }
    }
    
    void yavasla(){
        if(hiz - 5 >= 0){
            yavaslamaAdedi++;
            hiz-=5;
            System.out.println(model + " arabası yavaşladı.");
            System.out.println("Şimdiki hızı : " + hiz);
            System.out.println("-------------------------------------");
        }else{
            System.out.println("Araba yavaşlamadı.");
            System.out.println("Şimdiki hızı : " + hiz);
            System.out.println("Yavaşlama adedi : " + yavaslamaAdedi);
            System.out.println("-------------------------------------");
        }
    }
}
