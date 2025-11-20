#include <stdio.h>
#include <assert.h>
#include "fatorial.c"
int main(){
int resultado = fatorial(5);
assert(resultado == 120);
return 0;
}