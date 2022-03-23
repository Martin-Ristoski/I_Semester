#include <stdio.h>
#include <stdlib.h>
int main(){
    int telbr,op,telbr_sredina,telbr_kraj;
    scanf("%d",&telbr);
    op=telbr/1000000;
    telbr_sredina=telbr%1000000/1000;
    telbr_kraj=telbr%1000;
    printf("0%d/%03d-%03d ",op,telbr_sredina,telbr_kraj);
    if(op==70 || op==71 || op==72)
        printf("T-mobile");
    else if(op==79)
        printf("LycaMobile");
    else
        printf("A1");
    return 0;
}
