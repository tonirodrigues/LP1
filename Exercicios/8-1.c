#include<stdio.h>
#include<string.h>

int main(void){
    char nome[25];

    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);

    FILE* f = fopen("ex8-1.txt", "w");

    for (int i=0; i<strlen(nome); i++){

    putc(nome[i],f);

    }
    fclose(f);

    return 0;
}
