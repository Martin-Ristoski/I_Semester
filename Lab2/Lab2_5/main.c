#include <stdio.h>
#include <stdlib.h>
int main(){
    int indeks,oc1,oc2,oc3,oc4,oc5,oc6,godina,god,nagrada;
    float prosek;
    scanf("%d",&indeks);
    scanf("%d%d%d%d%d%d",&oc1,&oc2,&oc3,&oc4,&oc5,&oc6);
    prosek=(oc1+oc2+oc3+oc4+oc5+oc6)/6.;
    nagrada=prosek>=9.5;
    godina=indeks/10000;
    if (godina==14)
    god=6;
    else if (godina==15)
    god=5;
    else if (godina==16)
    god=4;
    else if(godina==17)
    god=3;
    else if(godina==18)
    god=2;
    else if(godina==19)
    god=1;
    printf("Prosek: %.3f\n",prosek);
    printf("Student: %d\n",indeks);
    printf("%d godina\n",god);
    printf("Nagraden: %d",nagrada);
    return 0;
}
