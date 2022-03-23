#include <stdio.h>
#include <stdlib.h>
int main(){
    float BMI;
    int masa,visina;
    scanf("%d%d",&masa,&visina);
    float visinam=visina/100.;
    BMI=masa/(visinam*visinam);
    printf("%.2f",BMI);
    return 0;
}
