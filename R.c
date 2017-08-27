#include <stdio.h>
#include <math.h>

int main() {

  float base, expoente;
  double soma;

  printf("Digite a base: ");
  scanf("%f", &base );
  printf("Digite o expoente: ");
  scanf("%f", &expoente );

  soma = pow(base, expoente);

  printf("Potência: %lf\n", soma );


  return 0;
}
