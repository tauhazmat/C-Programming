#include <stdio.h> 
 
int main() { 
	// define Variables 
	float num1, num2;
	float sum, difference, product, quotient; 
	
	// user input and number initialization
	printf("Enter First Number : ");
	scanf("%f", &num1);
	printf("Enter Second Number : ");
	scanf("%f", &num2);
	
	// calculation
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	
	// calculation + division logic
	if(num2 != 0) {
		quotient = num1 / num2;
		printf("Division: %.2f\n", quotient);
	}
	else {
		printf("Division: Cannot divide by zero.\n");
	}
	
	// display results 
	printf("Addition: %.2f\n", sum);
	printf("Subtraction: %.2f\n", difference);
	printf("Multiplication: %.2f\n", product);
	
	// end program
	return 0;
}

































