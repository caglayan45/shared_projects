package KupKureHacimBulma;

class SphereBody extends Body {

    int yaricap;

    public void SetYaricap(int yaricap) {
        this.yaricap = yaricap;

    }

    public void hacim() {
        System.out.println("kürenin hacmi :" + (yaricap * yaricap * yaricap * pi * 4) / 3);
    }

}
