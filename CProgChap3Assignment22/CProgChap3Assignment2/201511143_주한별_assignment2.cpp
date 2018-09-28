/* Programming Exercise 3-6 */
#include <stdio.h>
#include <stdlib.h>

void function(void);
/* ANSI/ISO C function prototyping */

int main(void)
{
	printf("\tEnter the number of quarts of water: ");
	printf("_______\b\b\b\b\b\b\b");
	function();
	system("pause");
	return 0;
}

void function(void)
{
	float mass_mol = 3.0e-23; /* mass of water molecule in grams */
	float mass_qt = 950; /* mass of quart of water in grams */
	float quarts;
	float molecules;
	scanf("%f", &quarts);
	molecules = quarts * mass_qt / mass_mol;
	printf("\n\t%.2f quarts of water contain %e molecules.", quarts, molecules);
	printf("\rGee!\n");
}