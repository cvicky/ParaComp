#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
  omp_set_num_threads(16);
  // Do this part in parallel
  #pragma omp parallel
  {
  printf( "Hello, World!\n" );
  }
  return 0;
}
