#include <stdio.h>
int main()
{
  int x;

  scanf("%d",&x);

  switch(x)
  {
  case 12:
    printf("December,31");
  case 11:
    printf("November,30");
  case 10:
    printf("October,31");
  case 9:
    printf("September,30");
    break;
  case 8:
    printf("August,31");
    break;
  case 7:
    printf("July,31");
    break;
  case 6:
    printf("June,30");
    break;
  case 5:
    printf("May,31");
    break;
  case 4:
    printf("April,30");
    break;
  case 3:
    printf("March,31");
    break;
  case 2:
    printf("February,28/29");
    break;
  case 1:
    printf("January,31");
    break;

  }
  return 0;
}
