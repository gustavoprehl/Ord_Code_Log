#include "geracao.h"
//=============================================================================
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
//=============================================================================
// PROCEDIMENTO PARA TROCAR DOIS ELEMENTOS DO VETOR
void swap2(int *i, int *j) {
   int temp = *i;
   *i = *j;
   *j = temp;
}
//=============================================================================
// PROCEDIMENTO PARA PREENCHER UM ARRANJO COM ELEMENTOS EM ORDEM CRESCENTE
void crescente2(int *v, int n) {
   for (int i = 0; i < n; i++) {
      v[i] = i;
   }
}
//=============================================================================
// PROCEDIMENTO PARA PREENCHER UM ARRANJO COM ELEMENTOS EM ORDEM DECRESCENTE
void decrescente2(int *v, int n) {
   for (int i = 0; i < n; i++) {
      v[i] = n - 1 - i;
   }
}
//=============================================================================
// PROCEDIMENTO PARA PREENCHER UM ARRANJO COM ELEMENTOS EM ORDEM ALEATORIA
void aleatorio2(int *v, int n) {
   crescente2(v, n);
   srand(time(NULL));
   for (int i = 0; i < n; i++) {
      swap2(&v[i], &v[rand() % n]);
   }
}
//=============================================================================
