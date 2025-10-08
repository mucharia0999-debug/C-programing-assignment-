/*
Name:Mervyn Mucharia Mwangi
Reg:CT100/G/26241/25
Description:bankbalance
*/

#include <stdio.h>
int main()
{
	//declaration
int amount;
int balance = 1000;
printf("Your current balance is %d /n", balance);

while(balance>0) {
	printf("Enter the amount you wish to withdraw: /n");
	scanf("%d /n", &amount);
	balance -= amount;
	printf("Your new balance is: %d /n", balance);
}
	return 0;
}