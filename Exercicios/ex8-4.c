#include<stdio.h>
#include<string.h>


#define tam 3

int main(void){

    char nome[tam][25];

    for( int i=0; i<tam; i++){

        printf("Digite um nome: ");
//        scanf("%[^\n]s", nome[i]);
        scanf("%s", nome[i]);
    }

    FILE* f = fopen("ex8-4.txt","w");

    for( int i=0; i<tam; i++){
        for(int j=0; j<strlen(nome[i]);j++){
            putc(nome[i][j], f);
        }
            putc('\n',f);
    }

    fclose(f);
    return 0;
}
