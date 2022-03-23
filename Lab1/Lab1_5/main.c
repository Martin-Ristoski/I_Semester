#include <stdio.h>
#include <stdlib.h>
int main(){
    int vreme,vrememin,sec,min,h;
    scanf("%d",&vreme);
    sec=vreme%60;
    vrememin=vreme/60;
    h=vrememin/60;
    min=vrememin%60;
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi",vreme,h,min,sec);
    return 0;
}
