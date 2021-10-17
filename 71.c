/***************************************************************************
  Zadanie 71 - Napisz program, ktory rysuje na ekranie
    gwiazdki ulozone w trojkat ponizszego typu.
       *
      ***
     *****
    *******
    Liczbe rzedow podaje uzytkownik.
****************************************************************************/

#include <stdio.h>


void rysuj(int n){
    int i,j;
    int m = 1;
    int s = (2 * n - 1 ) / 2;
    
    for(i=0; i < n; i++)
	{
        for(j=0; j<s; j++)
		{
            printf(" ");
        }
        for(j=0; j < m; j++)
		{
            printf("*");
        }
        
        s--;
        m+=2;
        printf("\r\n");
    }
}

int main()
{
printf("Program rysuje trojkat rownoramienny.\n\n");

int n; // n bedzie liczba gwiazdek

    printf("Podaj ile gwiazdek maja miec jego dwa krotsze boki:\t");

        while (scanf("%d", &n) != 1 || n <= 0 || getchar() != '\n') {
            printf("Bledne dane. Popraw:\t\t");
            while (getchar() != '\n');
        }
        
    rysuj(n);
        

    printf("\n\nKoniec programu.\n");
}
