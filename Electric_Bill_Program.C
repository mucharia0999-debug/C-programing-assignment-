/*
Name:Mervyn Mucharia Mwangi
Reg:CT100/G/26241/25
Descrption: Calculating an Electric Bill
*/

#include <stdio.h>
float electricbill(int units) 
{
  float bill;
  
  if (units <= 100) {
    bill = units * 10; }
    
    else if (units <= 200) {
      bill = (100 * 10 ) + ((units - 100) * 15);
    }
         
      else {
        bill = (100 *10) + (100 * 15) + ((units -200) * 20);
      }
  return bill;
}

int main() {
  int units;
  float total;
  
  printf("Enter units consumed: ");
  scanf("%d\n", &units);
  
total = electricbill(units);
  printf("total bill = Ksh.%.2f\n", total);
  return 0;
}0