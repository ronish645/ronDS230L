#include <stdio.h>

int main()
{
  int a;
  printf("Enter value of a:\n"); 
  scanf("%d",&a);
  //shift a left by 3 bits.
  // operation a << 3 , binary representation of a i.e  2 = 010, moves all the bits 3 position to left.
  a = a << 3;
  printf("Left Shifted data:%d",a);
  return 0;
  
}
