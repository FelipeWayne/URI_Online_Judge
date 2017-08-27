#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor, cedula, din;

  scanf("%d", &valor);

  din=valor%100; cedula=((valor-din)/100); valor=din;
  printf("%d nota(s) de R$ 100,00\n", cedula);

  din=valor%50; cedula=((valor-din)/50); valor=din;
  printf("%d nota(s) de R$ 50,00\n", cedula);

  din=din%20; cedula=((valor-din)/20); valor=din;
  printf("%d nota(s) de R$ 20,00\n", cedula);

  din=din%10; cedula=((valor-din)/10); valor=din;
  printf("%d nota(s) de R$ 10,00\n", cedula);

  din=din%5; cedula=((valor-din)/5); valor=din;
  printf("%d nota(s) de R$ 5,00\n", cedula);

  din=din%2; cedula=((valor-din)/2); valor=din;
  printf("%d nota(s) de R$ 2,00\n", cedula);

  din=din%1; cedula=((valor-din)/1); valor=din;
  printf("%d nota(s) de R$ 1,00\n", cedula);

return 0;
}
