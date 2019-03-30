#include<stdio.h>

#define n 50

int main(void){

char nota[n];
int i, soma=0, cont = 0;
float media;
   for (i = 0; i<n; i++){
     printf("Digite a %d nota:",i+1);
     scanf("%hhd", &nota[i]);
     soma += nota[i];
   }
    media = soma / n;
    printf("Media: %.2f\n", media);

   for (i = 0; i<n; i++){
     if(nota[i] > media){
         cont +=1;
     }
   }
    printf("Qtd de notas acima da media: %d\n", cont);    
    
return 0;
}
