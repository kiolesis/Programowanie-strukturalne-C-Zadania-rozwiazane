/******************************************************************************
Zadanie 18 - Program, kt�ry prosi użytkownika o podanie liczby wymiernej w postaci
            rozwinięcia dziesiętnego i wypisuje ją na ekranie. 
*******************************************************************************/

#include <stdio.h>

int main()
{
    float liczba;
    
    printf("Podaj liczbe wymierna: \n");
   	if(scanf("%f", &liczba), getchar()!='\n')
    printf("Bledne dane. Koniec programu.");
    
	else
    printf("Podales liczbe: %f \n", liczba);
    
    return 0;
}
