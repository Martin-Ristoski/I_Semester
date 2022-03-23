#include <stdio.h>
#include <stdlib.h>
int broj_cifri(int broj){
    int brc=0;
    while(broj>0){
        broj/=10;
        brc++;
    }
    return brc;
}
int opagjacka(int broj){
    int a=0,b,br=0;
    int brc=broj_cifri(broj);
    while(broj>0){
        b=broj%10;
        broj/=10;
        if(b>a){
            a=b;
            br++;
        }
        else
            return 0;
    }
    if(brc==br) return 1;
}

int main(){
    int N,broj;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&broj);
        printf("%d\n",opagjacka(broj));
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int broj_cifri(int broj){
    int brc=0;
    while(broj>0){
        broj/=10;
        brc++;
    }
    return brc;
}
int opagjacka(int broj){
    int a=0,b,br=0;
    int brc=broj_cifri(broj);
    while(broj>0){
        b=broj%10;
        broj/=10;
        if(b>a){
            a=b;
            br++;
        }
        else
            return 0;
    }
    if(brc==br) return 1;
}

int main(){
    int N,broj;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&broj);
        printf("%d\n",opagjacka(broj));
    }
    return 0;
}
