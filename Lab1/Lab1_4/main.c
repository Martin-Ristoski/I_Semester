#include <stdio.h>
#include <stdlib.h>
int main(){
    float prosek;
    int oc1,oc2,oc3,oc4,oc5;
    scanf("%d%d%d%d%d",&oc1,&oc2,&oc3,&oc4,&oc5);
    prosek=(oc1+oc2+oc3+oc4+oc5)/5.;
    printf("%.2f",prosek);
    return 0;
}
