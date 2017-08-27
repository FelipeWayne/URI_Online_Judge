#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159

int main () {

double R, V;

scanf ("%lf", &R);

V = (4 / 3.0) * PI * (R * R * R);

printf ("VOLUME = %.3lf\n", V);

return 0;
}
