#include <stdio.h>
#include <stdlib.h>
int obratenBroj (int broj){
    int ob=0,brc=0,tempbr=broj;
    while(tempbr>0){
        tempbr/=10;
        brc++;
    }
    for(tempbr=broj;tempbr>0;tempbr/=10){
        ob=ob*10+tempbr%10;
    }
    return ob;
}

int sumaNaCifri (int broj){
    int sc=0;
    for(int tempbr=broj;tempbr>0;tempbr/=10){
        sc=sc+tempbr%10;
    }
return sc;}

void pecatiVoInterval (int a, int b){
    while(a<=b){
            int ob=obratenBroj(a);
            int sc=sumaNaCifri(a+ob);
        if((a+ob)%sc==0)
            printf("%d\n",a);
        a++;
    }
}


int main()
{
    int broj,a,b;
    scanf("%d%d",&a,&b);
    pecatiVoInterval(a,b);
    return 0;
}
