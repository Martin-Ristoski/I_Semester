#include <stdio.h>
#include <stdlib.h>
int main(){
    int broj,suma1,suma2,edinici,desetki,stotki,iljadarki,desetilj;
    scanf("%d",&broj);
    edinici=broj%10;
    desetki=(broj%100)/10;
    stotki=(broj%1000)/100;
    iljadarki=(broj%10000)/1000;
    desetilj=broj/10000;
    suma1=desetilj+edinici;
    suma2=iljadarki+desetki;
    printf("%d ",suma1);
    printf("%d ",suma2);
    printf("%d ",stotki);
    return 0;
}
