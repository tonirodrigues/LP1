#include<stdio.h>
#include<stdlib.h>

#define MAX 3

typedef struct {

	char nome[50];
	int idade;
	float peso;
	char time[50];
	
}jogador;

void inserir(jogador *j){
	
	printf("Digite o Nome: ");
	scanf("%s", j->nome);
	printf("Digite a Idade: ");
	scanf("%d", &j->idade);
	printf("Digite o Peso: ");
	scanf("%f", &j->peso);
	printf("Digite o Time: ");
	scanf("%s", j->time);
}

void exibir(jogador *j){

	  printf("Nome: %s\n", j->nome);
	  printf("Idade: %d\n", j->idade);
	  printf("Peso: %.2f\n", j->peso);
	  printf("Time: %s\n\n", j->time);	  
	  
}


int main(void){
	
  jogador p[MAX];

   for (int i = 0; i < MAX; i++) {
   	
     printf("Jogador %d\n", i+1);
	 inserir(&p[i]); 	
     system ("cls");		
   }
  
    system ("cls");		  
    
	printf("Lista de Jogadores!\n\n");	
   
   for (int i = 0; i < MAX; i++) {
	
	printf("Jogador %d\n", i+1);   	
    exibir(&p[i]);

   }


	
	return 0;
}
