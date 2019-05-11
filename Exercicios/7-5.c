#include<stdio.h>

struct ponto{
  int x;
  int y;
  int z;
};


int main(void){

  struct ponto v1 = {1,0,5};
  struct ponto v2 = {3,3,3};
  struct ponto v3 = {0,10,0};

  printf("Coordenadas de y:(%d,%d,%d)\n\n",v1.y, v2.y, v3.y);
  v1.z +=10;
  v2.z +=10;
  v3.z +=10;
  printf("Coordenadas de z:(%d,%d,%d)\n\n",v1.z, v2.z, v3.z);
  printf("Coordenadas de v2:(%d,%d,%d)\n\n",v2.x, v2.y, v2.z);

return 0;
}
