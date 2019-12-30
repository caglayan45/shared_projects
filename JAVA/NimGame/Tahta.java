package NimGame;

import java.util.ArrayList;

public class Tahta {

    int satirSayisi,toplamCubuk;
    ArrayList<Satir> satirlar=new ArrayList<Satir>();

    Tahta(int satirSayisi){
        this.satirSayisi = satirSayisi;
        for (int i = 1; i <= satirSayisi; i++) {
            satirlar.add(new Satir(i));
        }
    }

    void Ciz(){
        for (int i = 0; i < satirSayisi; i++) {
            satirlar.get(i).Ciz();
        }
        System.out.println(GetToplamCubuk());
    }

    int GetToplamCubuk(){
        toplamCubuk = 0;
        for (int i = 0; i < satirlar.size(); i++) {
            toplamCubuk += satirlar.get(i).GetCubukSayisi();
        }
        return toplamCubuk;
    }

    Boolean CubukAl(int satirSayisi,int cubukSayisi){
        if(satirSayisi > 0 && satirSayisi <=this.satirSayisi && satirlar.get(satirSayisi-1).CubukAl(cubukSayisi)){
            Ciz();
            return true;
        }
        return false;
    }


}
