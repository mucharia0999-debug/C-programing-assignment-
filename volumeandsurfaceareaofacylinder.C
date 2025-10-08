// c program
/*
Name:Mervyn Mucharia Mwangi 
Reg:CT100/G/26241/25
Descrption:volume & surface area of a cylinder
*/

#include <stdio.h>
int main ()
{
  float pi = 3.142, radius, height, volume, surfacearea;
  
  //prompt the user to enter radius & height
  printf("Enter radius");
  scanf("%f", &radius);
  
  printf("Enter height");
  scanf("%f", &height);
  
  //general formulars of volume & height
  volume = pi * radius * radius* height;
  surfacearea =( 2 * pi * radius * radius )+ (2 * pi * radius * radius* height);
  
  //execution of the details
  printf("/n %.2f cm^3", volume);
  printf("/n %.2f cm^2", surfacearea);
  
  return 0;
}
