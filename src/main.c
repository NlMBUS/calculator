#define _CRT_SECURE_NO_WARNINGS//allows scanf 
#include <stdio.h>//imports basic libraries
#include <math.h>//imports more math operations

int main(void) {
	printf("Welcome to my Command-Line Calculator (CLC)\nDeveloper: Abid Rahman\nVersion: 2\nDate: November 18th 2022\n----------------------------------------------------\n\nSelect one of the following items:\nB) - Binary Mathematical Operations, such as addition and subtraction.\nU) - Unary Mathematical Operations, such as square root, and log.\nA) - Advances Mathematical Operations, using variables, arrays.\nV) – Define variables and assign them values.\nE) - Exit\n");//welcome message 
	int valid = 0;//creates a boolean to see if an input is valid or not
	int set = 0;//creates a boolean of if a variable was created or not
	float variables[5] = {0, 0, 0, 0, 0};//creates array of 5 variables
	char item;//creates item variable to know which set of operations the calculator will be performing from
	char item2;//creates item variable to know which set of operations the calculator will be performing from after inputting for advanced
	item = 0;//sets default value for item
	while (1) {
		scanf(" %c", &item);//takes the input for the item
		if (item == 'B') {//if the input is B then it will be from the binary mathematical operation set
			float num1;//creates the first number variable
			char operation;//creates the operation variable
			float num2;//creates the second number variable
			puts("Please enter the first number:");//asks for first number
			valid = scanf("%f", &num1);//checks if it's a valid input
			while (!valid){
				puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
				while (getchar() != '\n');//flushes the input so the input can be entered again
				valid = scanf(" %f", &num1);//asks for input again		
			} 
			valid = 0;//resets validity
			puts("Please enter the operation (+ , - , * , /, %, P, X, I):");//asks for operation
			scanf(" %c", &operation);//takes operation input
			while (1) {
				if (operation == '+') {//if the operation is addition
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", num1 + num2);//print the sum
					break;
				}
				else if (operation == '-') {//if the operation is subtraction
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", num1 - num2);//print the difference
					break;
				}
				else if (operation == '*') {//if the operation is multiplication
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", num1 * num2);//print the product
					break;
				}
				else if (operation == '/') {//if the operation is division
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
						valid = 0;
					}
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
						if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
							valid = 0;
						}
					}
					valid = 0;//resets validity
					printf("The result is %f\n", num1 / num2);//print the quotient
					break;
				}
				else if (operation == '%') {//if the operation is division
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
						valid = 0;
					}
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
						if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
							valid = 0;
						}
					}
					valid = 0;//resets validity
					int modnum1;//converts it to integer since modulus doesn't accept float values
					int modnum2;//converts it to integer since modulus doesn't accept float values
					modnum1 = (int)(num1);
					modnum2 = (int)(num2);
					printf("The result is %i\n", modnum1 % modnum2);//print the remainder
					break;
				}
				else if (operation == 'P') {//if the operation is power
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", pow(num1, num2));//print the power result
					break;
				}
				else if (operation == 'X') {//if the operation is maximum
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", num1 > num2 ? (num1) : (num2));//print the maximum
					break;
				}
				else if (operation == 'I') {//if the operation is minimum
					puts("Please enter the second number:");//asks for second number
					valid = scanf("%f", &num2);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num2);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", num1 < num2 ? (num1) : (num2));//print the minimum
					break;
				}
				else {
					puts("Invalid operation");//asks for input again if invalid operation
					while (getchar() != '\n');//flushes the input so the input can be entered again
					scanf(" %c", &operation);//takes operation input
				}
			}
			puts("Please select your option (B , U , A , V, E)");//asks for the item again
		}
		else if (item == 'U') {//if the input is U then it will be from the unary mathematical operation set
			float num;//creates the first number variable
			char operation;//creates the operation variable
			puts("Please enter the operation (S, L, E, C, F):");//asks for operation
			scanf(" %c", &operation);//takes operation input
			while (1) {
				if (operation == 'S') {//if the operation is square root
					puts("Please enter the number:");//asks for number
					valid = scanf("%f", &num);//checks if it's a valid input
					if (num < 0) {//makes sure the number isn't <0 so it isn't undefined
						valid = 0;
					}
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num);//asks for input again		
						if (num < 0) {//makes sure the number isn't <0 so it isn't undefined
							valid = 0;
						}
					}
					valid = 0;//resets validity
					printf("The result is %f\n", sqrt(num));//print the square root
					break;
				}
				else if (operation == 'L') {//if the operation is log
					puts("Please enter the number:");//asks for number
					valid = scanf("%f", &num);//checks if it's a valid input
					if (num <= 0) {//makes sure the number isn't <=0 so it isn't undefined
						valid = 0;
					}
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num);//asks for input again		
						if (num <= 0) {//makes sure the number isn't <=0 so it isn't undefined
							valid = 0;
						}
					}
					valid = 0;//resets validity
					printf("The result is %f\n", log(num));//print the log
					break;
				}
				else if (operation == 'E') {//if the operation is e
					puts("Please enter the number:");//asks for number
					valid = scanf("%f", &num);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", exp(num));//print the e
					break;
				}
				else if (operation == 'C') {//if the operation is ceiling
					puts("Please enter the number:");//asks for number
					valid = scanf("%f", &num);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", ceil(num));//print the ceiling
					break;
				}
				else if (operation == 'F') {//if the operation is floor
					puts("Please enter the number:");//asks for number
					valid = scanf("%f", &num);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &num);//asks for input again		
					}
					valid = 0;//resets validity
					printf("The result is %f\n", floor(num));//print the floor
					break;
				}
				else {
					puts("Invalid operation");//asks for input again if invalid operation
					while (getchar() != '\n');//flushes the input so the input can be entered again
					scanf(" %c", &operation);//takes operation input
				}
			}
			puts("Please select your option (B , U , A , V, E)");//asks for the item again
		}
		else if (item == 'V') {//if the input is B then it will ask to store variables
			char letter;//creates the letter for the variable
			float value;//creates the value for the variable
			puts("Enter a variable letter (a, b, c, d, e)");//asks for which letter
			while (getchar() != '\n');//flushes the input so the input can be entered again
			scanf("%c", &letter);//takes the letter input
			while (set == 0) {//if the input isn't set the keep doing the loop
				if (letter == 'a') {//if the operation is addition
					puts("Enter the value of the variable");
					valid = scanf(" %f", &value);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &value);//asks for input again		
					}
					valid = 0;//resets validity
					variables[0] = value;//sets the value to the first index of the variables array
					set = 1;//indicates that a variable has been set to end the loop
				}
				else if (letter == 'b') {//if the operation is addition
					puts("Enter the value of the variable");
					valid = scanf("%f", &value);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &value);//asks for input again		
					}
					valid = 0;//resets validity
					variables[1] = value;//sets the value to the second index of the variables array
					set = 1;//indicates that a variable has been set to end the loop
				}
				else if (letter == 'c') {//if the operation is addition
					puts("Enter the value of the variable");
					valid = scanf("%f", &value);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &value);//asks for input again		
					}
					valid = 0;//resets validity
					variables[2] = value;//sets the value to the third index of the variables array
					set = 1;//indicates that a variable has been set to end the loop
				}
				else if (letter == 'd') {//if the operation is addition
					puts("Enter the value of the variable");
					valid = scanf("%f", &value);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &value);//asks for input again		
					}
					valid = 0;//resets validity
					variables[3] = value;//sets the value to the fourth index of the variables array
					set = 1;//indicates that a variable has been set to end the loop
				}
				else if (letter == 'e') {//if the operation is addition
					puts("Enter the value of the variable");
					valid = scanf("%f", &value);//checks if it's a valid input
					while (!valid) {
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						while (getchar() != '\n');//flushes the input so the input can be entered again
						valid = scanf("%f", &value);//asks for input again		
					}
					valid = 0;//resets validity
					variables[4] = value;//sets the value to the fifth index of the variables array
					set = 1;//indicates that a variable has been set to end the loop
				}
				else {
					puts("Invalid letter");//asks for input again if invalid operation
					while (getchar() != '\n');//flushes the input so the input can be entered again
					scanf(" %c", &letter);//takes operation input
				}
			}
			puts("Please select your option (B , U , A , V, E)");//asks for the item again
			set = 0;
		}
		else if (item == 'A') {//if the input is A then it will be from the advanced mathematical operation set
			puts("Use your variable by entering B or U");
			while (getchar() != '\n');//flushes the input so the input can be entered again
			scanf(" %c", &item2);
			while (1) {
				if (item2 == 'B') {//if the input is B then it will be from the binary mathematical operation set
					float num1;//creates the first number variable
					char operation;//creates the operation variable
					float num2;//creates the second number variable
					puts("Please enter the first number:");//asks for first number
					valid = scanf("%f", &num1);//checks if it's a valid input
					float float1;//creates the first float variable for the final input
					char char1;//creates the first character variable to be compared to the letters
					while (!valid) {
						char char1;
						valid = scanf("%c", &char1);//checks if it's a valid input
						if (char1 == 'a') {//if the letter is a, then set the final first float as the first array value
							float1 = variables[0];
							valid = 0;//resets validity
							break;
						}
						if (char1 == 'b') {//if the letter is b, then set the final first float as the second array value
							float1 = variables[1];
							valid = 0;//resets validity
							break;
						}
						if (char1 == 'c') {//if the letter is c, then set the final first float as the third array value
							float float1;
							float1 = variables[2];
							valid = 0;//resets validity
							break;
						}
						if (char1 == 'd') {//if the letter is d, then set the final first float as the fourth array value
							float1 = variables[3];
							valid = 0;//resets validity
							break;
						}
						if (char1 == 'e') {//if the letter is e, then set the final first float as the fifth array value
							float1 = variables[4];
							valid = 0;//resets validity
							break;
						}
						puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
						valid = scanf("%f", &num1);//asks for input again		
					}
					if (valid) {//if num1 was a float then set it as the final first float 
						float1 = num1;
					}
					valid = 0;//resets validity
					
					puts("Please enter the operation (+ , - , * , /, %, P, X, I):");//asks for operation
					scanf(" %c", &operation);//takes operation input
					while (1) {
						if (operation == '+') {//if the operation is addition
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a') {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b') {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c') {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd') {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e') {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", float1 + float2);//print the sum
							break;
						}
						else if (operation == '-') {//if the operation is subtraction
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a') {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b') {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c') {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd') {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e') {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", float1 - float2);//print the difference
							break;
						}
						else if (operation == '*') {//if the operation is multiplication
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a') {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b') {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c') {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd') {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e') {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", float1 * float2);//print the product
							break;
						}
						else if (operation == '/') {//if the operation is division
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
								valid = 0;
							}
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a' && variables[0] != 0) {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b' && variables[1] != 0) {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c' && variables[2] != 0) {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd' && variables[3] != 0) {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e' && variables[4] != 0) {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again	
								if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
									valid = 0;
								}
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", float1 / float2);//print the quotient
							break;
						}
						else if (operation == '%') {//if the operation is division
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
								valid = 0;
							}
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a' && variables[0] != 0) {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b' && variables[1] != 0) {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c' && variables[2] != 0) {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd' && variables[3] != 0) {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e' && variables[4] != 0) {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
								if (num2 == 0) {//makes sure the denominator isn't 0 so it isn't undefined
									valid = 0;
								}
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							int modnum1;//converts it to integer since modulus doesn't accept float values
							int modnum2;//converts it to integer since modulus doesn't accept float values
							modnum1 = (int)(float1);
							modnum2 = (int)(float2);
							printf("The result is %i\n", modnum1 % modnum2);//print the remainder
							break;
						}
						else if (operation == 'P') {//if the operation is power
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a') {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b') {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c') {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd') {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e') {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", pow(float1, float2));//print the power result
							break;
						}
						else if (operation == 'X') {//if the operation is maximum
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a') {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b') {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c') {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd') {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e') {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", float1 > float2 ? (float1) : (float2));//print the maximum
							break;
						}
						else if (operation == 'I') {//if the operation is minimum
							puts("Please enter the second number:");//asks for second number
							valid = scanf("%f", &num2);//checks if it's a valid input
							float float2;//creates the second float variable for the final input
							char char2;//creates the second character variable to be compared to the letters
							while (!valid) {
								char char2;
								valid = scanf("%c", &char2);//checks if it's a valid character
								if (char2 == 'a') {//if the letter is a, then set the final second float as the first array value
									float2 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'b') {//if the letter is b, then set the final second float as the second array value
									float2 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'c') {//if the letter is c, then set the final second float as the third array value
									float2 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'd') {//if the letter is d, then set the final second float as the fourth array value
									float2 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char2 == 'e') {//if the letter is e, then set the final second float as the fifth array value
									float2 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								valid = scanf("%f", &num2);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final second float 
								float2 = num2;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", float1 < float2 ? (float1) : (float2));//print the minimum
							break;
						}
						else {
							puts("Invalid operation");//asks for input again if invalid operation
							while (getchar() != '\n');//flushes the input so the input can be entered again
							scanf(" %c", &operation);//takes operation input
						}
					}
					
					puts("Please select your option (B , U , A , V, E)");//asks for the item again
					break;
				}

				else if (item2 == 'U') {//if the input is U then it will be from the unary mathematical operation set
					float num1;//creates the first number variable
					char operation;//creates the operation variable
					puts("Please enter the operation (S, L, E, C, F):");//asks for operation
					while (getchar() != '\n');//flushes the input so the input can be entered again
					scanf(" %c", &operation);//takes operation input
					while (1) {
						if (operation == 'S') {//if the operation is square root
							float num1;//creates the number variable
							puts("Please enter the number:");//asks for number
							valid = scanf("%f", &num1);//checks if it's a valid input
							float float1;//creates the float variable for the final input
							char char1;//creates the character variable to be compared to the letters
							if (num1 < 0) {//makes sure the number isn't <0 so it isn't undefined
								valid = 0;
							}
							while (!valid) {
								char char1;
								valid = scanf("%c", &char1);//checks if it's a valid input
								if (char1 == 'a' && variables[0] >=0) {//if the letter is a, then set the final float as the first array value
									float1 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'b' && variables[1] >= 0) {//if the letter is b, then set the final float as the second array value
									float1 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'c' && variables[2] >= 0) {//if the letter is c, then set the final float as the third array value
									float1 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'd' && variables[3] >= 0) {//if the letter is d, then set the final float as the fourth array value
									float1 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'e' && variables[4] >= 0) {//if the letter is e, then set the final float as the fifth array value
									float1 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								while (getchar() != '\n');//flushes the input so the input can be entered again
								valid = scanf("%f", &num1);//asks for input again		
								if (num1 < 0) {//makes sure the number isn't <0 so it isn't undefined
									valid = 0;
								}
							}
							if (valid) {//if num2 was a float then set it as the final float 
								float1 = num1;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", sqrt(float1));//print the square root
							break;
						}
						else if (operation == 'L') {//if the operation is log
							float num1;//creates the number variable
							puts("Please enter the number:");//asks for number
							valid = scanf("%f", &num1);//checks if it's a valid input
							float float1;//creates the float variable for the final input
							char char1;//creates the character variable to be compared to the letters
							if (num1 <= 0) {//makes sure the number isn't <=0 so it isn't undefined
								valid = 0;
							}
							while (!valid) {
								char char1;
								valid = scanf("%c", &char1);//checks if it's a valid input
								if (char1 == 'a' && variables[0] > 0) {//if the letter is a, then set the final float as the first array value
									float1 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'b' && variables[1] > 0) {//if the letter is b, then set the final float as the second array value
									float1 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'c' && variables[2] > 0) {//if the letter is c, then set the final float as the third array value
									float1 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'd' && variables[3] > 0) {//if the letter is d, then set the final float as the fourth array value
									float1 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'e' && variables[4] > 0) {//if the letter is e, then set the final float as the fifth array value
									float1 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								while (getchar() != '\n');//flushes the input so the input can be entered again
								valid = scanf("%f", &num1);//asks for input again		
								if (num1 <= 0) {//makes sure the number isn't <=0 so it isn't undefined
									valid = 0;
								}
							}
							if (valid) {//if num2 was a float then set it as the final float 
								float1 = num1;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", log(float1));//print the log
							break;
						}
						else if (operation == 'E') {//if the operation is e
							float num1;//creates the number variable
							puts("Please enter the number:");//asks for number
							valid = scanf("%f", &num1);//checks if it's a valid input
							float float1;//creates the float variable for the final input
							char char1;//creates the character variable to be compared to the letters
							while (!valid) {
								char char1;
								valid = scanf("%c", &char1);//checks if it's a valid input
								if (char1 == 'a') {//if the letter is a, then set the final float as the first array value
									float1 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'b') {//if the letter is b, then set the final float as the second array value
									float1 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'c') {//if the letter is c, then set the final float as the third array value
									float1 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'd') {//if the letter is d, then set the final float as the fourth array value
									float1 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'e') {//if the letter is e, then set the final float as the fifth array value
									float1 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								while (getchar() != '\n');//flushes the input so the input can be entered again
								valid = scanf("%f", &num1);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final float 
								float1 = num1;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", exp(float1));//print the e
							break;
						}
						else if (operation == 'C') {//if the operation is ceiling
							float num1;//creates the number variable
							puts("Please enter the number:");//asks for number
							valid = scanf("%f", &num1);//checks if it's a valid input
							float float1;//creates the float variable for the final input
							char char1;//creates the character variable to be compared to the letters
							while (!valid) {
								char char1;
								valid = scanf("%c", &char1);//checks if it's a valid input
								if (char1 == 'a') {//if the letter is a, then set the final float as the first array value
									float1 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'b') {//if the letter is b, then set the final float as the second array value
									float1 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'c') {//if the letter is c, then set the final float as the third array value
									float1 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'd') {//if the letter is d, then set the final float as the fourth array value
									float1 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'e') {//if the letter is e, then set the final float as the fifth array value
									float1 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								while (getchar() != '\n');//flushes the input so the input can be entered again
								valid = scanf("%f", &num1);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final float 
								float1 = num1;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", ceil(float1));//print the ceiling
							break;
						}
						else if (operation == 'F') {//if the operation is floor
							float num1;//creates the number variable
							puts("Please enter the number:");//asks for number
							valid = scanf("%f", &num1);//checks if it's a valid input
							float float1;//creates the float variable for the final input
							char char1;//creates the character variable to be compared to the letters
							while (!valid) {
								char char1;
								valid = scanf("%c", &char1);//checks if it's a valid input
								if (char1 == 'a') {//if the letter is a, then set the final float as the first array value
									float1 = variables[0];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'b') {//if the letter is b, then set the final float as the second array value
									float1 = variables[1];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'c') {//if the letter is c, then set the final float as the third array value
									float1 = variables[2];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'd') {//if the letter is d, then set the final float as the fourth array value
									float1 = variables[3];
									valid = 0;//resets validity
									break;
								}
								if (char1 == 'e') {//if the letter is e, then set the final float as the fifth array value
									float1 = variables[4];
									valid = 0;//resets validity
									break;
								}
								puts("Invalid number");//keeps printing invalid number if the user keeps entering invalid numbers
								while (getchar() != '\n');//flushes the input so the input can be entered again
								valid = scanf("%f", &num1);//asks for input again		
							}
							if (valid) {//if num2 was a float then set it as the final float 
								float1 = num1;
							}
							valid = 0;//resets validity
							printf("The result is %f\n", floor(float1));//print the floor
							break;
						}
						else {
							puts("Invalid operation");//asks for input again if invalid operation
							while (getchar() != '\n');//flushes the input so the input can be entered again
							scanf(" %c", &operation);//takes operation input
						}
					}
					puts("Please select your option (B , U , A , V, E)");//asks for the item again
					break;
				}
				else {
					puts("Invalid option");//asks for input again if invalid operation
					while (getchar() != '\n');//flushes the input so the input can be entered again
					scanf(" %c", &item2);//takes operation input
				}
			}
			item = 0;//resets value of item1 and item2
			item2 = 0;
		}
		else if (item == 'E') {//if the input is E then exit the loop
			break;
		}
		else {
			puts("Invalid option");//asks for input again if invalid option
		}
		scanf("%c", &item);//asks for the input again
	}
	puts("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!");//prints goodbye message after the loop is done
	return 0;
}