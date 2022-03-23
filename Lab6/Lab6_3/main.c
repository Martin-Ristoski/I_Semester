#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
    int a[MAX];
    int i,n,j,temp,del=1;
    scanf("%d",&n);
    for(i=0;i<n;++i){ //scan
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i){ //print
        printf("%d ",a[i]);
    }
    printf("\n");
    j=n;
    for(i=0;i<n/2;++i,--j){ //switch
        temp=a[i];
        a[i]=a[j-1];
        a[j-1]=temp;
    }
    for(i=0;i<n;++i){ //print switched
        printf("%d ",a[i]);
    }
     printf("\n");
     for(i=0;i<n-del;++i){ //delete second element
         j=i;
         for(j++;j<n-del;++j){
             a[j]=a[j+1];
         }
         del++;
     }
     n-=del-1;
     for(i=0;i<n;++i){ //print delsecelem
        printf("%d ",a[i]);
    }
     printf("\n");
     j=n;
     for(i=0;i<n/2;++i,--j){ //switch delsecelem
        temp=a[i];
        a[i]=a[j-1];
        a[j-1]=temp;
    }
    for(i=0;i<n;++i){ //print switched delsecelem
        printf("%d ",a[i]);
    }
     
    return 0;
}
