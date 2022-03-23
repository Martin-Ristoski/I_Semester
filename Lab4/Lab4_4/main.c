#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,a1,a2,a3,a4,zbir=0,brojac=0;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++){
        if((a%10)%2==0 && (a%10)%3!=0) a1=(a%10); else a1=0;
        if(((a%100)/10)%2==0 && ((a%100)/10)%3!=0) a2=(a%100)/10; else a2=0;
        if(((a%1000)/100)%2==0 && ((a%1000)/100)%3!=0) a3=(a%1000)/100; else a3=0;
        if((a/1000)%2==0 && (a/1000)%3!=0) a4=a/1000; else a4=0;
        zbir=a1+a2+a3+a4;
        if(zbir>0 && zbir%7==0){
        printf("%d\n",a);
            brojac++;
        }
    }
    printf("Vkupno: %d",brojac);
    return 0;
}
