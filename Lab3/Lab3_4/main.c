#include <stdio.h>
#include <stdlib.h>
int main(){
    int mb,username,den,mesec,godina;
    scanf("%d",&mb);
    den=mb/100000;
    mesec=(mb/1000)%100;
    godina=mb%1000+1000;
    username=den*100+mesec*1000+godina;
    if(username<10000)
    {
        if(godina<1961)
        printf("%d",username+70000);
        else if(godina>1960 && godina<1981)
        printf("%d",username+80000);
        else printf("%d",username+90000);
    }
    else
    printf("%d",username);
    
    return 0;
}
