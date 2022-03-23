#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void printArray(int array[],int n){
    for(int i=0;i<n;++i){ //print
        printf("%d ",array[i]);
    }
}
int main(){
    int a[MAX];
    int i,n,j,temp,del=1;
    scanf("%d",&n);
    for(i=0;i<n;++i){ //scan
        scanf("%d",&a[i]);
    }
    printArray(a,n);
    printf("\n");
    j=n;
    for(i=0;i<n/2;++i,--j){ //switch
        temp=a[i];
        a[i]=a[j-1];
        a[j-1]=temp;
    }
    printArray(a,n);
     printf("\n");
     for(i=0;i<n-del;++i){ //delete second element
         j=i;
         for(j++;j<n-del;++j){
             a[j]=a[j+1];
         }
         del++;
     }
     n-=del-1;
     printArray(a,n);
     printf("\n");
     j=n;
     for(i=0;i<n/2;++i,--j){ //switch delsecelem
        temp=a[i];
        a[i]=a[j-1];
        a[j-1]=temp;
    }
    printArray(a,n);
    return 0;
}
