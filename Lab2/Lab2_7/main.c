#include <stdio.h>
#include <stdlib.h>
int main(){
    int pari,p1,p2,p3,p4,p5,test;
    scanf("%d",&pari);
    scanf("%d%d%d%d%d",&p1,&p2,&p3,&p4,&p5);
    pari+=p1+p2+p3+p4+p5;
    test=pari>0;
    printf("%d",test);
    return 0;
}
