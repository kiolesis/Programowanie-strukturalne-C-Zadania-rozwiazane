/******************************************************************************
Zadanie 19 - program, który prosi użytkownika o podanie dwóch liczb całkowitych,
            a następnie wypisuje je na ekranie.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int liczba_pierwsza;
    int liczba_druga;
    
    printf("Podaj pierwsza liczbe calkowita: \n");
    scanf("%d", &liczba_pierwsza);
    
    printf("Podaj druga liczbe calkowita: \n");
    scanf("%d", &liczba_druga);
    
   if(getchar()!='\n')
   
	    printf("Bledne dane. Koniec programu.");
   	else
    	printf("Podales liczbe: %d oraz: %d  \n", liczba_pierwsza, liczba_druga);
    
    return 0;
}
