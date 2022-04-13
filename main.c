#include "heapsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "shellsort.h"
#include "performance.h"
#include "geracao.h"
//=============================================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
//=============================================================================
int main(int argc, char *argv[])
{
    int *V;
    srand(time(0));

    printf("Time\tMemory\tN\n");
    for(int n = 2000; n <= 524288000; n *= 2){

        Performance ordenacao;
        V = (int*)malloc(n * sizeof(int));

        if(V == NULL){
            printf("Nao tem memoria.");
            break;
        }

        //Melhor caso
        crescente2(V, n);
        //Pior caso
        //decrescente2(V, n);
        //Médio caso
        //aleatorio2(V, n);

        //Algoritmo heapsort
        /*start_ordenation(&ordenacao);
        heapsort(V, n);
        end_ordenation(&ordenacao);
        calculate_cpu(&ordenacao);
        print_performance(&ordenacao, n);*/

        //Algoritmo mergesort
        /*start_ordenation(&ordenacao);
        mergesort(V, n);
        end_ordenation(&ordenacao);
        calculate_cpu(&ordenacao);
        print_performance(&ordenacao, n);*/

        //Algoritmo quicksort
        start_ordenation(&ordenacao);
        quicksort(V, n);
        end_ordenation(&ordenacao);
        calculate_cpu(&ordenacao);
        print_performance(&ordenacao, n);

        //Algoritmo shellsort
        /*start_ordenation(&ordenacao);
        shellsort(V, n);
        end_ordenation(&ordenacao);
        calculate_cpu(&ordenacao);
        print_performance(&ordenacao, n);*/
        free(V);
    }
    return 0;
}
