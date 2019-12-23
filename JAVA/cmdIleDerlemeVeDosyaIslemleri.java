import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	/*
		cmd ile derleyip çalıştırınız
		ilk önce bulunduğu dizine gidip şunu yazın : javac Main.java
		derleyip bulunduğu konumda Main.class dosyasını oluşturacaktır ondan sonra çalıştırabilirsiniz
		çalıştırmak için şunu yazın : java Main okunacak.txt yazilacak.txt
	*/

    public static void main(String[] args) {
        if(args.length != 2) {
            System.out.println("Lutfen 2 parametre giriniz");
            return;
        }
		
		if(!args[0].endsWith(".txt") || !args[1].endsWith(".txt"))
        {
            System.out.println("Dosya uzantilari txt formatinda olmalidir.");
            return;
        }
		
		String okunacakTxt = args[0];
		String yazilacakTxt = args[1];
		File okuFile = new File(okunacakTxt);
        File yazFile = new File(yazilacakTxt);
		
		if(!okuFile.exists()){
			System.out.println("Okunacak dosya bulunamadi.");
            return;
		}
		
		try{
			Scanner oku = new Scanner(okuFile);
			Scanner yaz = new Scanner(yazFile);
			
			int satirSayisi=0,kelimeSayisi=0,sayiAdedi=0,rakamAdedi=0,boslukSayisi=0,buyukHarfleBaslayanKelimeSayisi=0,harfKontrol=0,karakterSayisi=0;
			
			ArrayList<Character> harfler = new ArrayList<>();
			ArrayList<Integer> harfSayilari = new ArrayList<>();
			
			String line;
			while(oku.hasNext()){
				line = oku.nextLine();
				String kelimeler[] = line.split(" ");
				
				satirSayisi++;
				kelimeSayisi += kelimeler.length;
				karakterSayisi += line.length();
				
				for (int i = 0; i < kelimeler.length; i++) {
					if(kelimeler[i].length() > 1 && Character.isUpperCase(kelimeler[i].charAt(0)))
						buyukHarfleBaslayanKelimeSayisi++;
				}
				
				for (int i = 0; i < line.length(); i++) {
                    if(line.charAt(i) == ' ')
                        boslukSayisi++;
                }
				
				for (int i = 0; i < line.length(); i++) {
                    if(i <= line.length()-2 && Character.isDigit(line.charAt(i)) && Character.isDigit(line.charAt(i+1))){
                        while(Character.isDigit(line.charAt(i))){
                            i++;
                            if(i == line.length()-1)
                                break;
                        }
                        sayiAdedi++;
                    }else if(Character.isDigit(line.charAt(i))){
                        rakamAdedi++;
                    }
                }
				
				for (int i = 0; i < line.length(); i++) {
                    char c = line.charAt(i);
                    for (int j = 0; j < harfler.size(); j++) {
                        String harf = Character.toString(harfler.get(j));
                        if(harf.equalsIgnoreCase(Character.toString(c))){
                            int a = harfSayilari.get(j);
                            harfSayilari.set(j,++a);
                            harfKontrol++;
                        }
                    }
                    if(harfKontrol == 0){
                        harfler.add(c);
                        harfSayilari.add(1);
                    }else
                        harfKontrol = 0;
                }
				
			}
			
			FileOutputStream fos = new FileOutputStream(yazFile);

            fos.write(("Satir sayisi : " + satirSayisi + "\n").getBytes());
            fos.write(("Karakter sayisi : " + karakterSayisi + "\n").getBytes());
            fos.write(("Kelime sayisi : " + kelimeSayisi + "\n").getBytes());
            fos.write(("Sayi adedi : " + sayiAdedi + "\n").getBytes());
            fos.write(("Rakam adedi : " + rakamAdedi + "\n").getBytes());
            fos.write(("Buyuk harfle baslayan kelime sayisi : " + buyukHarfleBaslayanKelimeSayisi + "\n").getBytes());
            fos.write(("Bosluk sayisi : " + boslukSayisi + "\n").getBytes());

            for (int i = 0; i < harfler.size(); i++) {
                if(Character.isLetter(harfler.get(i))){
                    String harf = Character.toString(harfler.get(i));
                    fos.write(("[" + harf.toUpperCase() + "/" + harf.toLowerCase() + "  :  " + harfSayilari.get(i) + "]\n").getBytes());
                }else{
                    fos.write(("[" + harfler.get(i) + "    :  " + harfSayilari.get(i) + "]\n").getBytes());
                }
            }
			/*
			System.out.println("Satir sayisi : " + satirSayisi);
			System.out.println("Kelime sayisi : " + kelimeSayisi);
			System.out.println("Sayi adedi : " + sayiAdedi);
            System.out.println("Rakam adedi : " + rakamAdedi);
			System.out.println("Buyuk harfle baslayan kelime sayisi : " + buyukHarfleBaslayanKelimeSayisi);
			System.out.println("Bosluk sayisi : " + boslukSayisi);
			System.out.println("Harfler :     " + harfler);
            System.out.println("Frekanslari : " + harfSayilari);*/
			
			System.out.println("\nYazma islemi basarili.\n");
			
		}catch(Exception e){
			System.out.println(e);
		}
		

    }

}