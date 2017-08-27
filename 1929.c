#include <stdlib.h>
#include <stdio.h>

int main () {
  int num[4];
  int tr, i, j;

  scanf(" %d %d %d %d", &num[0], &num[1], &num[2], &num[3] );

  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      if (num[j] > num[j+1]){
        tr = num[j];
        num[j] = num[j+1];
        num[j+1] = tr;
      }
    }
  }

  if( num[0] + num[1] > num[2] ){
    printf("S\n" );
  } else {
    if(num[1] + num[2] > num[3]){
      printf("S\n" );
    } else {
      printf("N\n" );
    }
  }


return 0;
}
