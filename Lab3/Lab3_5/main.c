#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c,x1,x2,x3,y1,y2,y3;
    float AB,AC,BC;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    scanf("%d%d",&x3,&y3);
    AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    BC=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    AC=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    if(AB>BC && AB>AC)
    printf("AB");
    else if(BC>AC && BC>AB)
    printf("BC");
    else if(AC>AB && AC>BC)
    printf("AC");
    return 0;
}
