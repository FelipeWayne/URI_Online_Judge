#include <stdlib.h>
#include <stdio.h>

int main () {

double preco1, preco2, pagar;
int cpeca1, cpeca2, npeca1, npeca2;

scanf ("%d %d %lf", &cpeca1, &npeca1, &preco1);
scanf ("%d %d %lf", &cpeca2, &npeca2, &preco2);

pagar = (preco1 * npeca1) + (preco2 * npeca2);

printf ("VALOR A PAGAR: R$ %.2lf\n", pagar);

return 0;
}
