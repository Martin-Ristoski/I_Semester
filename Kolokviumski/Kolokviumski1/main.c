#include <stdio.h>
#include <stdlib.h>
int main(){
   int m,n;
   scanf("%d%d",&m,&n);
   while(m<=n){
       if((m%10)%2==0 && (m%100/10)%2==0 && (m%1000/100)%2==0 && (m/1000%10)%2==0 && (m/10000)%2==0)
       {printf("%d\n",m); break;}
       else
       m++;
   }
   if(m==(n+1))
   printf("NE");
    return 0;
}
