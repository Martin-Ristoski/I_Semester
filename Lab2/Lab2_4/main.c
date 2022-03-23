#include <stdio.h>
#include <stdlib.h>
int main(){
    int C,K,P,V,B,M,D,km,komp1,komp2,test;
    scanf("%d",&km);
    scanf("%d%d%d",&C,&K,&P);
    scanf("%d%d%d%d",&V,&B,&M,&D);
    komp1=C+(km-K)*P;
    komp2=B+(km/V)*M+km*D;
    printf("%d %d\n",komp1,komp2);
    test=komp1<=komp2;
    printf("%d",test);
    return 0;
}
