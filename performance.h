#ifndef PERFORMANCE_H
#define PERFORMANCE_H
//==========================================================================
/*#include <windows.h>
#include <winbase.h>
#include <psapi.h>*/
#include <sys/resource.h>
#include <time.h>
#include <stdint.h>
//==========================================================================
typedef struct Performance
{
    clock_t start_time, end_time;
    double cpu_time_used, memory_used;
}Performance;
//==========================================================================
void start_ordenation(Performance *p);
//==========================================================================
void end_ordenation(Performance *p);
//==========================================================================
void calculate_cpu(Performance *p);
//==========================================================================
//double get_memory_used_MB();
//==========================================================================
void print_performance(Performance *p, int n);
//==========================================================================
#endif