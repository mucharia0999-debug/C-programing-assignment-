/*
Name:Mervyn Mucharia Mwangi
Reg: CT100/G/26241/25
Description:Passwordcheck
*/
#include <stdio.h>
#include <string.h>

int main(){
//declaration
	char password[20];
	
	do{
	 //prompt the user to enter password
	 printf("Enter your password:");
	    scanf("%s", password) ;}	
		
		//when the password is incorrect
		if(strcmp(password, "1234")!= 1);{
			printf("Incorrect password.Try again");
		}
		
		//when the password is correct
		while(strcmp(password, "1234")!= 0);{
		printf("Access granted\n");}
		
		
return 0;	
}