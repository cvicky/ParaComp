#include <omp.h>
#include <stdio.h>

int main(int argc, char∗ argv[]) {
int id;
#pragma omp parallel private(id)
{
id = omp get thread num();
printf("%d: Hello World!\n", id);
}
return 0;
}
