#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,zbir,razlika,proizvod,kolicnik,ostatok;
    scanf("%d%d",&a,&b);
    zbir=a+b;
    razlika=a-b;
    proizvod=a*b;
    kolicnik=a/b;
    ostatok=a % b;
    printf("a + b = %d\n",zbir);
    printf("a - b = %d\n",razlika);
    printf("a * b = %d\n",proizvod);
    printf("a / b = %d\n",kolicnik);
    printf("a %% b = %d",ostatok);
    return 0;
}
