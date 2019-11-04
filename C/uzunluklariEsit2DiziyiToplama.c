#include <stdio.h>

void main()
{
      int a[8]={7,1,1,8,4,2,8,5};
      int b[8]={6,9,3,0,4,6,1,5};
    int c[9]={0,0,0,0,0,0,0,0,0};

    int elde=0;

    for(int i=7;i>=0;i--){
        c[i+1]=a[i]+b[i]+elde;
        elde=c[i+1]/10;
        c[i+1]=c[i+1]%10;
    }
	
    c[0]=elde;

    for(int i=0;i<9;i++)
        printf("%d ",c[i]);
}
