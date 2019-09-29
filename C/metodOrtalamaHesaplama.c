#include <stdio.h>
#include <stdlib.h>

double notHesabi(int vize,int finl)
{
    return (vize*0.4)+(finl*0.6);
}

void main()
{
    int vize=0,finl=0;
    printf("Vize notunu gir : ");
    scanf("%d",&vize);

    printf("Final notunu gir : ");
    scanf("%d",&finl);

    printf("\nOrtalamaniz : %f",notHesabi(vize,finl));

}
