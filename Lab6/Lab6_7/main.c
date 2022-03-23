#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
    int N,n,i,br=0,z;
    int a[MAX];
    scanf("%d",&N);
    for(z=0;z<N;++z){
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
        }
        br=0;
        int l=n;
        int k=n-1;
        if(n%2==0){
        for(i=0;i<n/2;++i,k--){
            if(a[i]==a[k]) br++;}
            br*=2;
        }
            else
        {
        for(i=0;i<((n/2)+1);++i,k--){
            if(a[i]==a[k]) br++;}
            br=br*2-1;
        }
        printf("%.2f%% \n",100.*br/l);
        
        
    }
    return 0;
}
