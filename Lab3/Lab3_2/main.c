#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c;
    float x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    if((b*b-4*a*c)>0){
    x1=((-b+sqrt(b*b-4*a*c))/(2.*a));
    x2=((-b-sqrt(b*b-4*a*c))/(2.*a));
    printf("Reshenija na ravenkata se: %.2f i %.2f",x2,x1);
    }
    else if((b*b-4*a*c)==0)
    {
        x1=((-b+sqrt(b*b-4*a*c))/2.*a);
        printf("Dvojno reshenie na ravenkata e: %.2f",x1);
    }
    else printf("Ravenkata nema realni reshenija");
    return 0;
}
