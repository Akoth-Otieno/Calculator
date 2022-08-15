#include <stdio.h>

int main()
{
	char operator;
	double num_1, num_2;

	/*Ask user for input.*/
	printf("Select Operator(+, -, *, or /)");

	/*Assign user input to the variable operator.'*/
	scanf("%c", &operator);

	/*Ask user to enter any two numbers on which to perform operation.*/
	printf("Enter two numbers, one after another: ");

	/*Read user input and assign it to the two double variables.*/
	scanf("%lf %lf",&num_1,&num_2);

	/*The logic for the calculator using switch statement*/
	switch
	{
		case '+':
			printf("%lf + %lf = lf", num_1,num_2,(num_1+num_2));
			break;

		case '-':
                        printf("%lf - %lf = lf", num_1,num_2,(num_1-num_2));
                        break;

		case '*':
                        printf("%lf * %lf = lf", num_1,num_2,(num_1*num_2));
                        break;

		case '/':
			if (num_2 =! 0.0)
				printf("%lf / %lf = lf", num_1,num_2,(num_1/num_2));
			else
				printf("Divide by Zero");
			break;

		default:
			printf("Invalid Operator");

			break;

	return (0);
	

	}






	return (0);
}
