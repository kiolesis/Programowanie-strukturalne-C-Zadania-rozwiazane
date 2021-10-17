/******************************************************************************
Zadanie 17 - Program, ktory prosi uzytkownika o podanie liczby calkowitej,
            a nastepnie wypisuje ja na ekranie. Musi zwracac komunikat
            uzytkownikowi, jesli wpisany symbol nie jest liczba calkowita.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int liczba ;
    printf("Podaj liczbe calkowita: \n");
    if(scanf("%d", &liczba), getchar()!='\n')
	printf("Bledne dane. Koniec programu.");
    
	else
	printf("Podales liczbe: %d \n", liczba);
    
    return 0;
}
