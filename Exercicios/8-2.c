#include<stdio.h>
#include<string.h>

int main(void){
    char nome[25],c;
    int i = 0;
    FILE* f = fopen("ex8-1.txt", "r");

    while( ( c=fgetc(f) ) !=EOF ){

        nome[i] = c;
        i ++;
    }

    fclose(f);

    printf("%s",nome);

    return 0;
}
