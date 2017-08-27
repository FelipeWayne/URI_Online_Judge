#include <stdio.h>
#include <stdlib.h>

int main() {
  double lit, h, km;

  scanf("%lf %lf", &h, &km);
  lit = (km*h)/12;

  printf("%.3lf\n", lit);


return 0;
}
