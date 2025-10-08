//c program
/* 
Name: Mervyn Mucharia aMwangi
Reg:CT100/G/26241/25
Descriotion:Loan qualifiation program
*/

#include <stdio.h>
int main()
{
  int age;
  float income;
  
  //prompt the user to enter age and income
  printf ("Enter your age: ");
  scanf("%d yrs", &age);
  
printf("Enter your income: ");
scanf("ksh %f", &income);
  
  //Checking elegibility of the loan
  if(age>=21 && income>=21000) {
    printf("congratulations, you qualify for a loan./n");
  }else {
  printf("unfortunately, we are unable to offer you a loan this time./n");
}
 return 0;
}
