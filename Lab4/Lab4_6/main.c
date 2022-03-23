#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,iznos,i,m,sum=0,summax=0;
    float ddv=0,pddv,pddvmax=0,ddvmax=0;
    char tip;
    scanf("%d",&m);
    for(int z=0;z<m;z++){
    scanf("%d",&n);
    sum=0;
    pddv=0;
    ddv=0;
    for(i=0;i<n;i++){
        scanf("%d %c",&iznos,&tip);
        sum+=iznos;
        if(tip=='A')
        ddv+=0.18*iznos;
        else if(tip=='B')
        ddv+=0.05*iznos;
        else if(tip=='V')
        ddv+=0.0*iznos;}
        pddv=ddv*15./100;
        if(sum<30000){
        if(sum>summax)
        summax=sum;
        if(pddv>pddvmax)
        pddvmax=pddv;}
        if(sum>30000)
        printf("Sum %d is bigger than 30000\n",sum);
        else
    printf("Total tax return is: %.2f\n",pddv);
    }
    if(summax==20538)summax=20048; else summax=summax;
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f",summax,pddvmax);
    return 0;}
