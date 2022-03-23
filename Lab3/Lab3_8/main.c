#include <stdio.h>
#include <stdlib.h>
int main(){
    int d,m,g,a,b;
    scanf("%d%d%d",&d,&m,&g);
    if(m>0 && m<13) a=1; else a=0;
    switch(m)
    {case 1: if(d<32) b=1; else b=0; break;
    case 2: if(g%400==0 || (g%4==0 && g%100!=0))
                {if(d<30) b=1; else b=0;}
                else
                {
                    if(d<29) b=1; else b=0;
                } break;
    case 3: if(d<32) b=1; else b=0; break;
    case 4: if(d<31) b=1; else b=0; break;   
    case 5: if(d<32) b=1; else b=0; break; 
    case 6: if(d<31) b=1; else b=0; break;  
    case 7: if(d<32) b=1; else b=0; break;   
    case 8: if(d<32) b=1; else b=0; break;   
    case 9: if(d<31) b=1; else b=0; break;
    case 10: if(d<32) b=1; else b=0; break;
    case 11: if(d<31) b=1; else b=0; break;
    case 12: if(d<32) b=1; else b=0; break;
    }
    if(a==1 && b==1)
    printf("DA"); else printf("NE");
    return 0;
}
