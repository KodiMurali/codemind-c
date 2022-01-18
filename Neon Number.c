#include <stdio.h>
 
int main()
{
  int num, square, i, sum = 0;
  scanf("%d", &num);
 
  //Calculating the square of the No.
  square = num * num;
 
  i = square;
 
  //Adding the digits of square
  while (i > 0)
  {
    sum += i % 10;
    i = i / 10;
  }
 
 //Check for original Number and display
  if (sum == num)
    printf("Neon Number");
  else
    printf("Not Neon Number");
 
  return 0;
}