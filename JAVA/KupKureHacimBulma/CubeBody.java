package KupKureHacimBulma;

class CubeBody extends Body {
    
    int kenar;

    public void SetKenar(int kenar){
     this.kenar = kenar;
    }

    public void hacim(){
        System.out.println("küpün hacmi :"+(kenar*kenar*kenar));
    }
           
}
    
