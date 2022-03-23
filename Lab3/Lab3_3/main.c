#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,c,n1,n2,n3,n4,c1,c2,c3,c4,kolega;
    float p;
    scanf("%d",&n);
    n1=n%10;
    n2=(n/10)%10;
    n3=(n/100)%10;
    n4=(n/1000);
    if(n1&&n2==5 || n1&&n3==5 || n1&&n4==5 || n2&&n3==5 || n2&&n4==5 || n3&&n4==5)
    {
       if(n1==5) c1=6;
       else c1=n1;
       if(n2==5) c2=6;
       else c2=n2;
       if(n3==5) c3=6;
       else c3=n3;
       if(n4==5) c4=6;
       else c4=n4;
       kolega=c1+c2*10+c3*100+c4*1000;
       if(kolega>n)
       p=((kolega-n)/(float)n)*100.;
       else p=((n-kolega)/(float)kolega)*100.;
       printf("%.4f%%",p);
    }
    else printf("Error");
    return 0;
}
