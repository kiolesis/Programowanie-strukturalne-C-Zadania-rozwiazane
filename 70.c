/***************************************************************************
  Zadanie 70 - Napisz program, który rysuje na ekranie
    gwiazdki ułożone w trójkąt poniższego typu.
    *
    **
    ***
    ****
    Liczbę rzędów podaje użytkownik. 
***************************************************************************/

#include <stdio.h>

void rysuj(int n){
    int i,j;
    int m = 1;
    
    for(i=0; i < n; i++)
	{
        for(j=0; j < m; j++)
		{
            printf("*");
        }
        
        m++;
        printf("\r\n");
    }
}

int main()
{
printf("Program rysuje na ekranie gwiadki ulozone w trojkat.\n\n");

int n; // Niech 'n' bedzie liczba gwiazdek

    printf("Podaj ile gwiazdek ma miec jeden bok trojkata:\t");

        while (scanf("%d", &n) != 1 || n <= 0 || getchar() != '\n')
		{
            printf("Bledne dane. Popraw:\t\t");
            while (getchar() != '\n');
        }
        
    rysuj(n);
        

    printf("\n\nKoniec programu.\n");
}
