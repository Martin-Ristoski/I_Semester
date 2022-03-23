#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,a,b,c,d,dmin=999999999;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        d=abs(a-b)+abs(b-c);
        if(d<dmin) dmin=d;
    }
    printf("%d",dmin);
    return 0;
}
