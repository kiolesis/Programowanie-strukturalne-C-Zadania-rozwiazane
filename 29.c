/*Zadanie 29*/

#include <stdio.h>

int main() {

	printf("Elo mordo podaj wspolrzedne\n");
	float x, y;
	printf("x=\n");
	if (scanf_s("%f", &x) != 1 || getchar() !='\n')
	{
		printf("Blad programu\n");
		return;
	}
	printf("y=\n");
	if (scanf_s("%f", &y) != 1 || getchar() != '\n')
	{
		printf("Blad programu\n");
		return;
	}
	
	if (x >0 && y >0 ) printf("punkt lezy w pierwszej cwiartce");
		
	if (x> 0 && y <0) printf("punkt lezy w czwartej cwiartce");

	if (x < 0 && y < 0) printf("punkt lezy w trzeciej cwiartce");
		
	if (x < 0 && y > 0) printf("punkt lezy w drugiej cwiartce");
	
	if (x == 0 && y == 0) printf("punkt lezy w srodku ukladu wspolrzednych");

	if (x == 0 && y != 0) printf("punkt lezy na osi y");
	
	if (x != 0 && y == 0) printf("punkt lezy na osi x");

	printf("\nKoniec programu\n\n\n");
	
}
