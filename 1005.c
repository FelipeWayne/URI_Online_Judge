#include <stdlib.h>
#include <stdio.h>

int main () {

double A, B, MEDIA;

scanf ("%lf %lf", &A, &B);

MEDIA = ((A * 0.35) + (B * 0.75)) / 1.1;

printf ("MEDIA = %.5lf\n", MEDIA);

return 0;
}
