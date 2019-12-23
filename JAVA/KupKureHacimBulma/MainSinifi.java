package KupKureHacimBulma;

public class MainSinifi {

    public static void main(String[] args) {

        SphereBody kure1 = new SphereBody();
        kure1.SetYaricap(3);
        kure1.hacim();

        CubeBody kup1 = new CubeBody();
        kup1.SetKenar(4);
        kup1.hacim();

    }

}
