#include <stdio.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *f;
    char c;
    int mali=0,golemi=0,vkupno=0;
    if((f=fopen("text.txt","r"))==NULL){
        printf("Ne mozhe da se otvori datotekata");
        return -1;
    }
    while((c=getc(f))!=EOF){
        if(islower(c)){
            mali++; vkupno++;
        }
        
        else if(isupper(c)){
            golemi++; vkupno++;
        }
        c++;
    }
    printf("%.4f\n%.4f",(float)golemi/(float)vkupno,(float)mali/(float)vkupno);
    // vasiot kod ovde
}
