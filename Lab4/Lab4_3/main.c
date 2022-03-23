#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,zbir,a1,a2,a3,brojac=0;
    scanf("%d%d",&a,&b);
    if(a>99){
            for(a;a<=b;a++){
        if((a/100)%2==0) a1=(a/100);
        else a1=0;
        if((a%10)%2==0) a2=(a%10);
        else a2=0;
        if(((a/10)%10)%2==0) a3=(a/10)%10;
        else a3=0;
        zbir=a1+a2+a3;
        if(zbir>0 && zbir%4==0)
        {printf("%d\n",a);
        brojac++;}
    }printf("Vkupno: %d\n",brojac);}
    else
    {for(a;a<=b;a++){
        if((a/10)%2==0) a1=(a/10);
        else a1=0;
        if((a%10)%2==0) a2=(a%10);
        else a2=0;
        zbir=a1+a2;
        if(zbir>0 && zbir%4==0)
        {printf("%d\n",a);
        brojac++;}
    }
    printf("Vkupno: %d",brojac);}
    return 0;
}
