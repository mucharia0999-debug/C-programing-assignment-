/*
Name:Mervyn Mucharia Mwangi
Reg:CT1OO/G/26241/25
Description:guessingrandomnumberswhileloop.C
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int secret, guess, attempts = 0;
	//seed based on time
	srand(time(0));
	//random numbrers between 1-20
	secret = rand() % 20 +1;

	while(1) {
	printf("Enter your guess between numbers (1-20):");
	    scanf("%d", &guess);
    	attempts++;
    	
	    if(guess > secret)
	    	printf("Too high \n");
	    
	    else if(guess < secret)
	    	printf("Too low\n");
	    
	    else{printf("Congratulations. You got it\n");
		printf("Total attempts: %d\n", attempts);
break;}
}	
 return 0;
 }