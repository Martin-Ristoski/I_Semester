#include <stdio.h>
#include <stdlib.h>
int main(){
    int suma,temp,den1,den2,den5,den10,den50,den100,den500,den1000,den5000;
    scanf("%d",&suma);
    temp=suma;
    den5000=temp/5000;
    temp%=5000;
    den1000=temp/1000;
    temp%=1000;
    den500=temp/500;
    temp%=500;
    den100=temp/100;
    temp%=100;
    den50=temp/50;
    temp%=50;
    den10=temp/10;
    temp%=10;
    den5=temp/5;
    temp%=5;
    den2=temp/2;
    temp%=2;
    den1=temp/1;
    temp%=1;
    printf("%d*5000\n",den5000);
    printf("%d*1000\n",den1000);
    printf("%d*500\n",den500);
    printf("%d*100\n",den100);
    printf("%d*50\n",den50);
    printf("%d*10\n",den10);
    printf("%d*5\n",den5);
    printf("%d*2\n",den2);
    printf("%d*1\n",den1);
    return 0;
}
