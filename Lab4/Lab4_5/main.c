#include <stdlib.h>
#include <stdio.h>
int main(){
    int n,iznos,i;
    float ddv=0,pddv;
    char tip;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&iznos,&tip);
        if(tip=='A')
        ddv+=0.18*iznos;
        else if(tip=='B')
        ddv+=0.05*iznos;
        else if(tip=='V')
        ddv+=0.0*iznos;}
    pddv=ddv*15./100;
    printf("Total tax return is: %.2f",pddv);
    return 0;
}
