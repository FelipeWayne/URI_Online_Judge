#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159

int main () {

double A, B, C, TRI, CIR, TRA, QUA, RET;

scanf ("%lf %lf %lf", &A, &B, &C);

TRI = (A * C) / 2;
CIR = PI * (C * C);
TRA = ((A + B) * C) / 2;
QUA = B * B;
RET = A * B;

printf("TRIANGULO: %.3lf\n", TRI);
printf("CIRCULO: %.3lf\n", CIR);
printf("TRAPEZIO: %.3lf\n", TRA);
printf("QUADRADO: %.3lf\n", QUA);
printf("RETANGULO: %.3lf\n", RET);


return 0;
}
