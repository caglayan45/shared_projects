package NimGame;

public class Satir {

    int satirNo,cubukSayisi;

    Satir(int satirNo){
        this.satirNo = satirNo;
        cubukSayisi = ((satirNo*2)-1);
    }

    int GetCubukSayisi(){
        return cubukSayisi;
    }

    void Ciz(){
        for (int i = 0; i < cubukSayisi; i++) {
            System.out.print("|\t");
        }
        System.out.println();
    }

    Boolean CubukAl(int cubukSayisi){
        if(cubukSayisi > 0 && cubukSayisi < 4){
            if(cubukSayisi > this.cubukSayisi)
                return false;
            else{
                this.cubukSayisi -= cubukSayisi;
                return true;
            }
        }else
            return false;
    }



}
