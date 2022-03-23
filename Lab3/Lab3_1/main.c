#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,br=0,pr=1,p=1000000,a;
    scanf("%d",&n);
    if(n/1000000!=0){
        if(n/1000000>9)
        printf("Vneseniot broj ne e 7 cifren!");
        else {
        while(p>0){
            a=n/p;
            n%=p;
            br+=a;
            pr*=a;
            printf("%d\n",a);
            p/=10;}
        printf("%d\n",br);
        printf("%d",pr);}
    }
    else printf("Vneseniot broj ne e 7 cifren!");
    return 0;
}
