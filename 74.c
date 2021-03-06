/*****************************************************************************
 Zadanie 74 - Napisz program, ktory wypisze sume w postaci
    ponizszego tekstu
    1 + 22 + 333 + 4444 + . . . + nn...n (n-razy)
    oraz jej wynik. Liczbe n ∈ {1, 2, . . . , 9} podaje uzytkownik.
*****************************************************************************/

#include <stdio.h>

int tablica[11] = { 0, 1, 22, 333, 4444, 55555, 666666, 7777777, 88888888, 999999999, 0 };

void wypisz(int n) {

	int i;
	int suma = 0;
	for (i = 1; i < n + 1; i++) {

		suma += tablica[i];
		if (i != n)printf("%d+", tablica[i]);
		else printf("%d=", tablica[i]);
	}
	printf("%d\r\n",suma);

}

int main()
{
	printf("Program wypisuje sume w postaci 1 + 22 + 333 + 4444 + . . . + nn...n (n-razy)\nw zaleznosci od podanego n ∈ {1, 2, . . . , 9} oraz wynik tej sumy.\n\n");

	int n;

	printf("Podaj jaka sume chcialbys wyswietlic:\t");

	while (scanf("%d", &n) != 1 || n <= 0 || n >=10 || getchar() != '\n') {
		printf("Bledne dane. Popraw:\t\t");
		while (getchar() != '\n');
	}

	wypisz(n);


	printf("\n\nKoniec programu.\n");
}
