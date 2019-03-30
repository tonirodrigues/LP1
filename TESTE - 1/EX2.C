#include<stdio.h>

int main(void){

int x,y,i,aux;

   printf("Digite o 1 numero ");
   scanf("%d",&x);
   printf("Digite o 2 numero ");
   scanf("%d",&y);

   if ( x > y){
     aux = x;
     x = y;
     y = aux;
   }

   for (y; y >= x; y--){
       if ( y%2 == 0){
         printf("%d\n", y) 
         ;
       }
    }

return 0;
}
