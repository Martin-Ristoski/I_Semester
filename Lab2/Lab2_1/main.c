#include <stdio.h>
#include <stdlib.h>
int main(){
    int pari,suma,test;
    scanf("%d",&pari);
    scanf("%d",&suma);
    float sumaddv=suma*1.18;
    pari-=sumaddv;
    test=pari>0;
    printf("%d",test);
    return 0;
}
