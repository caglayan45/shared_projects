
package nyp_07.pkg10.pkg2019;

public class Nyp_07102019 {
    
    
    
    public static void main(String[] args) {
        
        String d="5";
        int e=3;
        e=Integer.parseInt(d);//integer a çevrme
        d=Integer.toString(e);//int to string
        System.out.println(e);
        
        String deneme="merhaba";
        String derece;
        derece = "Sıcaklık " + 72;
        System.out.println(derece);
        System.out.println(derece.length());
        
        //string bir nesnedir.
        //deneme.toUpperCase(); <-- örnek 1 büyük harf
        //derece.lenght() <-- ornek 2 uzunluk
        //derece.toCharArray() <-- dereceyi char dizisine dönüştürür.
        //derece.substring(2,3) <-- 2. indexten başla 3 karakter al
        //derece.indexOf(str) <-- str derecenin içinde varmı varsa başladığı indexi veriyor
        //derece.contains("sds") <-- derecenin içinde sds varmı diye bakıyor
        
        System.out.println(deneme + " programcı");
        System.out.println(derece.charAt(1));
        
        for (char i = 'a'; i <= 'z'; i++) {
            System.out.print(i);
        }
        System.out.println("");
        
        String a1 = "abc";
        String a2 = "abc";
        if (a1==a2) {
            System.out.println("doğru");
        }else
            System.out.println("yanlış");
        
        
        
        String s = new String("asdfGHS");
        
        System.out.println(s.charAt(0));
        //kaç küçük, kaç büyük harf var
        //küçükleri büyüğe çevir büyükleri küçüğe
        int kSayac=0,bSayac=0;
        char[] sDizi = s.toCharArray();
        String kHarf;
        for (int i = 0; i < s.length(); i++) {
            if(sDizi[i] <= 'z' && sDizi[i] >= 'a' )
                kSayac++;
            else
                bSayac++;
        }
        
        System.out.println("Küçük harf sayısı : " + kSayac);
        System.out.println("Büyük harf sayısı : " + bSayac);
        
        
        for (int i = 0; i < s.length(); i++) {
            if(sDizi[i] <= 'z' && sDizi[i] >= 'a' ){
                sDizi[i]=(char)(sDizi[i] - 32);
            }else
                sDizi[i]=(char)(sDizi[i] + 32);
        }
        
        for (int i = 0; i < s.length(); i++) {
            System.out.print(sDizi[i]);
        }
        System.out.println("");
        
        
        
    }
}
