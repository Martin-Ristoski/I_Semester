#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m,min=999999,max=-999999,nr;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        if(m<min)
        min=m;
        else min=min;
        if(m>max)
        max=m;
    }
    nr=(max-min);
    printf("Najgolema razlika: %d",nr);
    return 0;
}
