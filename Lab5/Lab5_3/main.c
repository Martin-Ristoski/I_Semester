#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=1,n,joker=0,brojac=0,n1;
    while(a!=0){
        scanf("%d",&n);
        if(n>0 && n<90){
            if(brojac<7){
            n1=n%10;
            joker*=10;
            joker+=n1;
            brojac++;
            }
            else joker+=n;
            }
        else
            a--;
    }
    printf("%d",joker);
    return 0;
}
