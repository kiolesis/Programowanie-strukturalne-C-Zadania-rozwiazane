/***************************************************************************
 Zadanie 72 - . Napisz program, który wypisuje tabliczkę mnożenia w zakresie
    do piętnastu.
**************************************************************************/

#include <stdio.h>
#define N_TAB 10

void rysuj() {

	int i, j;

	printf("\t");
	for (i = 1; i < N_TAB + 1; i++)
	{
		printf("%d\t", i);
	}
	printf("\r\n");
	for (i = 0; i < 82; i++) printf("-"); /* 124 dla zdefiniowanej liczby do 15
											 82 dla zdefiniowanej liczby do 10	*/
	printf("\r\n");
	for (i = 1; i < N_TAB + 1; i++)
	{
		if (i < 10) printf(" ");
		printf("%d |\t", i);

		for (j = 1; j < N_TAB + 1; j++)	printf("%d\t", i*j);
		
		printf("\r\n");
	}

}

int main()
{
	printf("Program wyswietla tabliczke mnozenia w zakresie do 15\n");


	rysuj();


	printf("\n\nKoniec programu.\n");
}
