#include "stdio.h"
#include <stdlib.h>

// Color definitions
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define RESET   "\033[0m"

// Style definitions
#define BOLD    "\033[1m"
#define ITALIC  "\033[3m"

int	main()
{
	int	a;
	int	b;
	int	res;
	int	choice = 0;

	while (1)
	{
		printf(BLUE "   BIT a BIT\n" RESET);
		printf(YELLOW " & ^ | ~ >> << \n\n" RESET);
		printf(BOLD "1: &  (AND)\n");
		printf("2: ^  (XOR)\n");
		printf("3: |  (OR)\n");
		printf("4: ~  (NOT)\n");
		printf("5: >> (RIGHT SHIFT)\n");
		printf("6: << (LEFT SHIFT)\n");
		printf("0: Exit\n" RESET);
		
		printf("\nSelect a number: ");
		scanf("%d", &choice);
		
		if (choice == 0)
			break;
			
		switch(choice)
		{
			case 1:
				printf("\nOperator " GREEN BOLD"&" RESET " = " GREEN "AND\n" RESET);
				printf(ITALIC "AND returns 1 only if both bits are 1, otherwise returns 0\n" RESET);
				a = 1; b = 0; res = a & b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 0; b = 0; res = a & b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 0; b = 1; res = a & b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 1; b = 1; res = a & b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				break;
			case 2:
				printf("\nOperator " GREEN BOLD"^" RESET " = " GREEN "XOR\n" RESET);
				printf(ITALIC "XOR returns 1 if bits are different, 0 if bits are the same\n" RESET);
				a = 1; b = 0; res = a ^ b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 0; b = 0; res = a ^ b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 0; b = 1; res = a ^ b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 1; b = 1; res = a ^ b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				break;
			case 3:
				printf("\nOperator " GREEN BOLD"|" RESET " = " GREEN "OR\n" RESET);
				printf(ITALIC "OR returns 1 if at least one bit is 1, otherwise returns 0\n" RESET);
				a = 1; b = 0; res = a | b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 0; b = 0; res = a | b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 0; b = 1; res = a | b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 1; b = 1; res = a | b;
				printf("A: " BLUE "%d" RESET " " GREEN "&" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				break;
			case 4:
				printf("\nOperator " GREEN BOLD"~" RESET " = " GREEN "NOT\n" RESET);
				printf(ITALIC "NOT inverts all bits: 0 becomes 1, 1 becomes 0\n" RESET);
				a = 0; res = ~a;
				printf("~" BLUE "%d" RESET " = %d\n", a, res);
				a = 1; res = ~a;
				printf("~" BLUE "%d" RESET " = %d\n", a, res);
				printf(ITALIC "\nNOT inverts all bits:\n~0 = -1 (all bits 1)\n~1 = -2\n" RESET);
				break;
			case 5:
				printf("\nOperator " GREEN BOLD">>" RESET " = " GREEN "RIGHT SHIFT\n" RESET);
				printf(ITALIC "Right Shift moves bits to the right, dividing by 2 each step\n" RESET);
				a = 8; b = 1; res = a >> b;
				printf("A: " BLUE "%d" RESET " " GREEN ">>" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 8; b = 2; res = a >> b;
				printf("A: " BLUE "%d" RESET " " GREEN ">>" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 8; b = 3; res = a >> b;
				printf("A: " BLUE "%d" RESET " " GREEN ">>" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				printf(ITALIC "\n8 >> 1 = 4 (8/2)\n8 >> 2 = 2 (8/4)\n8 >> 3 = 1 (8/8)\n" RESET);
				break;
			case 6:
				printf("\nOperator " GREEN BOLD"<<" RESET " = " GREEN "LEFT SHIFT\n" RESET);
				printf(ITALIC "Left Shift moves bits to the left, multiplying by 2 each step\n" RESET);
				a = 1; b = 1; res = a << b;
				printf("A: " BLUE "%d" RESET " " GREEN "<<" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 1; b = 2; res = a << b;
				printf("A: " BLUE "%d" RESET " " GREEN "<<" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				a = 1; b = 3; res = a << b;
				printf("A: " BLUE "%d" RESET " " GREEN "<<" RESET " B: " BLUE "%d" RESET " = %d\n", a,b, res);
				printf(ITALIC "\n1 << 1 = 2 (1*2)\n1 << 2 = 4 (1*4)\n1 << 3 = 8 (1*8)\n" RESET);
				break;
			default:
				printf(RED "Invalid option!\n" RESET);
				break;
		}
		printf("\nPress Enter to continue...");
		while (getchar() != '\n');
		getchar();
		system("clear");
	}
	return (0);
}
