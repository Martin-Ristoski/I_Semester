#include <stdio.h>
#include <stdlib.h>
int main(){
    int z,a=1,b=1,zpar=0,brojac=0;
    float p;
    scanf("%d",&z);
    while((a+b)!=0){
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
        break;
        else
        {
            if((a+b)==z)
            zpar++;
            brojac++;
        }
    }
    p=(float)zpar/brojac*100;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n",zpar,z);
    printf("Procentot na parovi so zbir %d e %.2f%%",z,p);
    return 0;
}
