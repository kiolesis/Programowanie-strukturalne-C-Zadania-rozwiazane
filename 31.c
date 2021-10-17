/*Zadanie 31*/

#include <stdio.h>

int main() {
	
	float x, y, f_x;
	printf("Elo mordo podaj dwie liczby\n");
	printf("x=");
	
	if (scanf_s("%f", &x) != 1 || getchar() !='\n')
		{
			printf("Blad programu\n");
			return;
		}
		
	printf("y=");
	if (scanf_s("%f", &y) != 1 || getchar() != '\n')
		{
			printf("Blad programu\n");
			return;
		}
		
	if (x >= 1 || x <= 0)
	{
		printf("x nie nalezy do dziedziny funkcji\n");
		return;
	}

	f_x = sqrt(fabs(acos(x)+ exp(x) / log(x)));
	// W�asno�ci: sqrt fabs acos exp log

	if (y == f_x)
	{
		printf("tak\n");
		return;
		
	} else if (y > f_x)	{
		printf("powyzej\n");
		return;
	
	} else {
		printf("ponizej\n");
		return;
	}
	
	printf("Koniec programu\n\n\n");
	
}
