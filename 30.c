/*Zadanie 30*/

#include <stdio.h>

int main() {
	
	float liczba;
	printf("podaj liczbe:");
	scanf_s("%f", liczba);
	if (scanf_s("%f", &liczba) != 1 || getchar() != '\n')
	{
		printf("Blad programu\n");
		return;
	}
	if ((int)liczba == liczba)
	
	printf("To jest liczba calkowita\n"); else {
		liczba = floor(liczba);
		printf("zaokraglamy w dol %d, liczba");
	}
	
	printf("\nKoniec programu\n\n\n");
	return;
}
