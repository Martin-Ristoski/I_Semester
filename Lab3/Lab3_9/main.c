#include <stdio.h>
#include <stdlib.h>
int main(){
    int kw;
    float cena,cenaddv;
    scanf("%d",&kw);
    if(kw<=500)
    cena=5.*kw; 
    else if(kw>500 && kw<=650)
    cena=7.5*(kw-500)+500*5.0; 
    else if(kw>650 && kw<=850)
    cena=11.*(kw-650)+7.5*150+500*5.0;
    else cena=13.5*(kw-850)+11.*200+7.5*150+500*5.0;
    
    
    if(cena<=7000)
    cenaddv=cena*1.1;
    else cenaddv=cena*1.18;
    printf("%.2f",cenaddv);
    return 0;
}
