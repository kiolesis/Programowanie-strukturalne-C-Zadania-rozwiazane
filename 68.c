/***************************************************************************
    Zadanie 68 - Napisz program, ktory rysuje na ekranie
    gwiazdki ułozone w kwadrat.
    ***
    ***
    ***
    Liczbe gwiazdek w jednym rzedzie podaje uzytkownik.
***************************************************************************/


#include <stdio.h>


void rysuj(int n, int m){
    int i,j;
    
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
printf("Program rysuje gwiazdki ulozone w kwadrat.\n\n");

int n; // Niech 'n' bedzie liczba gwiazdek

    printf("Podaj ile gwiazdek ma miec jeden bok kwadratu:\t");

        while (scanf("%d", &n) != 1 || n <= 0 || getchar() != '\n') {
        	
            printf("Bledne dane. Popraw:\t\t");
            while (getchar() != '\n');
        }
        
    rysuj(n,n);
        

    printf("\n\nKoniec programu.\n");
}
