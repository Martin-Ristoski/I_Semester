#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,n1,n2,n3,n4,n5,n6,n7,m,m1,m2,m3,m4,m5,m6,m7;
    scanf("%d%d",&n,&m);
    n1=n%10;
    n2=n%100/10;
    n3=n%1000/100;
    n4=n%10000/1000;
    n5=n/10000%10;
    n6=n/100000%10;
    n7=n/1000000;
    m1=m%10;
    m2=m%100/10;
    m3=m%1000/100;
    m4=m%10000/1000;
    m5=m/10000%10;
    m6=m/100000%10;
    m7=m/1000000;
    if(n>9999){
    if((n1==m1 || n1==m2 || n1==m3 || n1==m4 || n1==m5 || n1==m6 || n1==m7) &&
       (n2==m1 || n2==m2 || n2==m3 || n2==m4 || n2==m5 || n2==m6 || n2==m7) &&
       (n3==m1 || n3==m2 || n3==m3 || n3==m4 || n3==m5 || n3==m6 || n3==m7) &&
       (n4==m1 || n4==m2 || n4==m3 || n4==m4 || n4==m5 || n4==m6 || n4==m7) &&
       (n5==m1 || n5==m2 || n5==m3 || n5==m4 || n5==m5 || n5==m6 || n5==m7) &&
       (n6==m1 || n6==m2 || n6==m3 || n6==m4 || n6==m5 || n6==m6 || n6==m7) &&
       (n7==m1 || n7==m2 || n7==m3 || n7==m4 || n7==m5 || n7==m6 || n7==m7))
       printf("DA");
       else
       printf("NE");}
       else {
        if((n1==m1 || n1==m2 || n1==m3 || n1==m4 || n1==m5 || n1==m6 || n1==m7) &&
       (n2==m1 || n2==m2 || n2==m3 || n2==m4 || n2==m5 || n2==m6 || n2==m7) &&
       (n3==m1 || n3==m2 || n3==m3 || n3==m4 || n3==m5 || n3==m6 || n3==m7) &&
       (n4==m1 || n4==m2 || n4==m3 || n4==m4 || n4==m5 || n4==m6 || n4==m7))
       printf("DA");
       else
       printf("NE");
       }
    return 0;
}