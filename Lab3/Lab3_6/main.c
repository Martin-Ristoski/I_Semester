#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,n1,n2,n3,n4,n5;
    scanf("%d",&n);
    if(n>9999 && n<100000){
    n1=n/10000;
    n2=(n/1000)%10;
    n4=(n/10)%10;
    n5=n%10;
    if(n1==n5 && n2==n4)
    printf("Palindrom");
    else printf("Ne e palindrom");}
    else printf("Nevaliden vlez");
    return 0;
}
