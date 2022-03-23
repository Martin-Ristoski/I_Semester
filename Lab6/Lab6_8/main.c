#include <stdlib.h>
#include <stdio.h>
#define MAX 100
int main(){
    int a[MAX];
    int i,N;
    scanf("%d",&N);
    for(i=0;i<N;++i){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        a[i]++;
        else
        a[i]--;
    }
    for(i=0;i<N;++i){
        printf("%d ",a[i]);}
    return 0;
}
