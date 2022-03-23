#include <stdio.h>
#include <stdlib.h>
int main(){
    int poeni,oc;
    char znak;
    scanf("%d",&poeni);
    if(poeni>-1 && poeni<101){
    if(poeni>-1 && poeni<51) oc=5;
    else if(poeni>50 && poeni<61) oc=6;
    else if(poeni>60 && poeni<71) oc=7;
    else if(poeni>70 && poeni<81) oc=8;
    else if(poeni>80 && poeni<91) oc=9;
    else if(poeni>90 && poeni<101) oc=10;
    if(poeni%10>0 && poeni%10<4) znak='-';
    else if(poeni%10>3 && poeni%10<8) znak=' ';
    else if(poeni%10>7) znak='+';
    if(oc!=5)
    printf("Ocenka %d%c",oc,znak);
    else printf("Ocenka %d",oc);
    }
    else printf("Nevalidna vrednost za poeni!");
    
    return 0;
}
