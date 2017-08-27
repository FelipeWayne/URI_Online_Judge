#include <stdlib.h>
#include <stdio.h>

int main () {

int N, H;
float R, S;

scanf ("%d %d %f", &N, &H, &R);

S = H * R;

printf ("NUMBER = %d\n", N);
printf ("SALARY = U$ %.2f\n", S);

return 0;
}
