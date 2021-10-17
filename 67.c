/***************************************************************************
 Zadanie 67 - Napisz program, ktory rysuje na ekranie tyle gwiazdek w jednej 
        linii, ile zazyczy sobie uzytkownik.
        
        Dodaj funkcjonalnoœæ - ka¿da gwiazdka w osobnej linijce.
**************************************************************************/

#include <stdio.h>

void rysowanie(int x){
    
    /* 	 Standard C inny ni¿ u¿ywany w kompilatorze.
	     Pêtlê for zast¹pi³em pêtl¹ while.				*/
    
	int i = 0;
	while(i < x)
	{
        putchar('*');
        putchar('\n');
        i++;
    }
    putchar('\n');
}

int main()
{
    printf("Program rysuje linie gwiazdek.\n");

    printf("Podaj ile gwiazdek chcesz narysowac:\t");
        
    int n;
        
    while (scanf("%d", &n) != 1 || n <= 0 || getchar() != '\n')
	{
        printf("Bledne dane. Popraw:\t\t");
		while (getchar() != '\n');
    }
    
    printf("\nLinia zlozona z %d gwiazd%s:\n\n", n, n == 1 ? "ki" : "ek");

    rysowanie(n);

printf("\n\nKoniec programu.\n");
}
