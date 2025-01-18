#include <stdio.h>
int main()
{
  int score;

  scanf("%d",&score);
  int y=score/10;
  switch(y)
  {
  case 10:
  case 9:
    printf("score=%d,grade:A",score);
    break;
  case 8:
    printf("score=%d,grade:B",score);
    break;
  case 7:
    printf("score=%d,grade:C",score);
    break;
  case 6:
    printf("score=%d,grade:D",score);
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("score=%d,grade:E",score);
    break;


  }
  return 0;
}
