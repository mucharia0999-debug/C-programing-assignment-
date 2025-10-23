/*
Name:Mervyn Mucharia Mwangi
Reg:CT100/G/26241/25
Description:Calculating fare program
*/

#include <stdio.h>
float fare(float distance)
{
 return distance * 50;
}

int main()
{
  float distance;
  float total;
  
  printf("Enter distance covered (Km): ");
  scanf("%f", &distance);
  
total = fare(distance);
printf("total fare = Ksh.%.2f./n", total);
return 0;
}