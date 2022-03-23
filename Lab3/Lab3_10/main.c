#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,n1,n2,n6,n7;
    scanf("%d",&n);
    n1=n/1000000;
    n2=(n/100000)%10;
    n6=(n%100)/10;
    n7=n%10;
   if(n1!=0 && n2!=0 && (n7+n6)!=0)
   {
        if((n%n1==0 && n%(n6+n7)!=0) || (n%n2!=0 && n%(n6+n7)!=0))
        printf("DA");
        else
        printf("NE");
    }
    else
        printf("Nevaliden broj");
    return 0;
}
