#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m1,m2,s,m,brojac=0;
    scanf("%d%d",&m,&n);
    for(m;m<=n;m++){
        if(m<10){
            s=m;
            if((m+s)<=(2*m)){
        printf("%d\n",m);
        brojac++;
        }}
        else{
        m1=m%10;
        m2=m/10;
        s=10*m1+m2;
        if((m+s)<=(2*m)){
        printf("%d\n",m);
        brojac++;}
    }}
    printf("Vkupno: %d\n",brojac);
    return 0;
}
