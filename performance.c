#include "performance.h"
#include <stdio.h>
#include <stdint.h>
//==========================================================================
//FUNÇÃO PARA CALCULAR A MEMÓRIA GASTA
double get_memory_used_MB()
{
    struct rusage r_usage;
    getrusage(RUSAGE_SELF,&r_usage);
    return r_usage.ru_maxrss/1024;
}
//==========================================================================
//PROCEDIMENTO PARA INICIAR O CLOCK
void start_ordenation(Performance *p){
    p -> start_time = clock();
}
//==========================================================================
//PROCEDIMENTO PARA ENCERRAR O CLOCK
void end_ordenation(Performance *p){
    p -> end_time = clock();
}
//==========================================================================
//PROCEDIMENTO PARA CALCULAR O TEMPO USADO E ATRIBUIR A FUNÇÃO DE MEMÓRIA 
//A UMA VARIÁVEL
void calculate_cpu(Performance *p){
    p -> cpu_time_used = ((double) (p -> end_time - p -> start_time)) / CLOCKS_PER_SEC;
    p -> memory_used = get_memory_used_MB();
}
//==========================================================================
//PROCEDIMENTO PARA MOSTRAR OS DADOS
void print_performance(Performance *p, int n){
    printf("%0.2lf\t%.2lf\t%d\n", p -> cpu_time_used, p -> memory_used, n);
}
//==========================================================================p -> memory_used