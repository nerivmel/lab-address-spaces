#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
  clock_t tiempo_inicio, tiempo_final;
  double segundos;
  if(argc == 1){
    printf("Debe especificar minimamente la cantidad de memoria a usar ");
    return -1;
  }
  else if(argc == 2){
   
    int *vector = malloc(atoi(argv[1])*1e6);
    for(int i = 0; i < (atoi(argv[1])*1e6)/4; i++){
      *(vector + i)=i;
    }
  }
  else{
      tiempo_inicio = clock();
      int br = atoi(argv[2]);
      br = br*-1;
      int *vector = malloc(atoi(argv[1])*1e6);
      for(int i = 0; i < (atoi(argv[1])*1e6)/4; i++){
      *(vector + i)=i;
      tiempo_final = clock();
      segundos = (double)(tiempo_inicio - tiempo_final)/CLOCKS_PER_SEC;
      
      if(segundos <= br){
	return -1;
      }
      }
  }
  
  return 0;
}