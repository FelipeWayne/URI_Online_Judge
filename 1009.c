#include <stdlib.h>
#include <stdio.h>

int main () {

double S, V, T;
char nome[10];

scanf ("%s %lf %lf", nome, &S, &V);

 T = S + (V * 0.15);

printf ("TOTAL = R$ %.2lf\n", T);

return 0;
}
