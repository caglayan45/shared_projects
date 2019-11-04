
package nyp_quiz_6;

import java.util.ArrayList;


public class Nyp_quiz_6 {

    
    public static void main(String[] args) {
        
        araba a1 = new araba("audi",2019,85);
        araba a2 = new araba("toyota",2018,210);
        araba a3 = new araba("reno",2016,0);
        
        ArrayList<araba> arabalar = new ArrayList<araba>();
        
        arabalar.add(a1);
        arabalar.add(a2);
        arabalar.add(a3);
        
        for (int i = 0; i < arabalar.size(); i++) {
            arabalar.get(i).bilgi();
        }
        
        for (int i = 0; i < arabalar.size(); i++) {
            if(arabalar.get(i).getYil()%2==1){
                arabalar.get(i).hizlan();
                arabalar.get(i).hizlan();
            }else{
                arabalar.get(i).yavasla();
                arabalar.get(i).yavasla();
            }
        }
        for (int i = 0; i < arabalar.size(); i++) {
            arabalar.get(i).bilgi();
        }
        
        araba.adet();
    }
    
}
