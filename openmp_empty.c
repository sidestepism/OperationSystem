/* 
 * openmp_empty.c
   コンパイル:
      gcc -fopenmp openmp_empty.c
   実行 (2スレッドの場合): 
      OMP_NUM_THREADS=2 ./a.out
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <omp.h>

void openmp_thread_func() {
  printf("OpenMP thread id = %d\n", omp_get_thread_num());
  sleep(1);
}

double cur_time() {
  struct timeval tp[1];
  gettimeofday(tp, NULL);
  return tp->tv_sec + tp->tv_usec * 1.0E-6;
}

int main(int argc, char ** argv)
{
  double t0 = cur_time();

#pragma omp parallel
  openmp_thread_func();

  double t1 = cur_time();
  printf("OK: elapsed time: %f\n", t1 - t0);
  return 0;
}
