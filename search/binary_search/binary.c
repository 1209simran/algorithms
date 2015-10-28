/*-------------------------------------------------------
  ICMC - University of Sao Paulo
   __  __  ____    ____    
  /\ \/\ \/\  _`\ /\  _`\  
  \ \ \ \ \ \,\L\_\ \ \L\ \
   \ \ \ \ \/_\__ \\ \ ,__/
    \ \ \_\ \/\ \L\ \ \ \/ 
     \ \_____\ `\____\ \_\ 
      \/_____/\/_____/\/_/ 
                           
        BINARY SEARCH
  (c) Felipe Scrochio Custódio
---------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "binary.h"

/*-------------------------------------------------------
  BINARY SEARCH
---------------------------------------------------------*/


/*-------------------------------------------------------
  AUXILIAR
---------------------------------------------------------*/

int* createRandomVector(int n, int min, int max) {

  int *v = (int*)malloc(sizeof(int) * n);
  if (v == NULL) return NULL;

  int i;
  for (i = 0 ; i < n; i++) {
    v[i] = rand()%(max-min) + min;
  }

  return v;
}

void printVector(int *v, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", *(v+i));
  }
  printf("\n");
}