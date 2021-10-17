/*************************************************************************
 Zadanie 69 - Napisz program, ktory rysuje na ekranie
gwiazdki ulozone w prostokat o szerokosci dwa razy mniejszej od długosci.
Liczbe rzedow podaje uzytkownik.
*************************************************************************/

#include <stdio.h>


void rysuj(int n){
    int i,j;
    int m = 2*n;
    for(i=0; i < n; i++)
	{
        for(j=0; j < m; j++)
		{
            printf("*");
        }
        printf("\r\n");
    }
}

int main()
{
	
printf("Program rysuje gwiazki ulozone w prostokat \no szerokosci dwa razymniejszej od dlugosci.\n\n");

int n; // n bedzie liczba gwiazdek

    printf("Podaj ile gwiazdek ma miec krotszy bok prostokata:\t");

        while (scanf("%d", &n) != 1 || n <= 0 || getchar() != '\n')
		{
            printf("Bledne dane. Popraw:\t\t");
            while (getchar() != '\n');
        }
        
    rysuj(n);
        

    printf("\n\nKoniec programu.\n");
}
