#include<stdio.h>
#include<string.h>
void matematickaOperacija (int a, int b, char operation, int *rezultat){
    switch(operation){
    case '+':rezultat=a+b; printf("%d + %d -> %d\n",a,b,rezultat);break;
    case '-':rezultat=a-b; printf("%d - %d -> %d\n",a,b,rezultat);break;
    case '*':rezultat=a*b; printf("%d * %d -> %d\n",a,b,rezultat);break;
    case '/':rezultat=a/b; printf("%d / %d -> %d\n",a,b,rezultat);break;
    case '%':rezultat=a%b; printf("%d %% %d -> %d\n",a,b,rezultat);break;}
}

int main () {

    int a,b,rezultat;

    scanf("%d %d", &a, &b);

    char * operacii = "+-*/%";

    int i;
    for (i=0;i<strlen(operacii);i++) {
        matematickaOperacija(a,b,operacii[i],&rezultat);
    }

	return 0;
}
