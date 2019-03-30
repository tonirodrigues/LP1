 #include<stdio.h>

int main(void){

int num,soma;

   printf("Digite um numero ");
   scanf("%d",&num);
   soma = 0;
     while (num > 0){
           soma += num;
           num -= 1;
    }
   printf("Somou %d\n", soma);


return 0;
}
