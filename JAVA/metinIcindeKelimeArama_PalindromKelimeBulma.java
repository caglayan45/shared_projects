
package nyp_01.pkg10.pkg2019_2uyg;


public class Nyp_01102019_2uyg {

    
    public static void main(String[] args) {
        
        //metnin içinde kelime arama
        String v="alikoşalivudralizıplalieuytaliefali";
        String z="ali";
        
        int d=v.indexOf(z);
        int sayac1=0;
        
        while(d != -1){
            sayac1++;
            v=v.substring(d + z.length());
            d=v.indexOf(z);
        }
        System.out.println(sayac1);
        
        
        
        //girilen kelimenin palindrom olup olmadığını bulan program(başlan ve sonran okunuşu aynı mı)
        String k="asddsa";
        int sayac=0;
        for (int i = 0; i < k.length()/2; i++) {
            if (k.charAt(i) == k.charAt(k.length()-(i+1))){
                sayac++;
            }  
            if(sayac==(k.length()/2))
                System.out.println("Palindrom");
 
        }
        
        
        
        
        
        
        
        
    }
    
}
