/************************************************************************************
********* ZADANIE 1 - PROBA ****************************************************/


#include <stdio.h>
 
int wczytanie()
{
    int ret = 0, i = 0;
    while (scanf("%d", &ret) != 1 || getchar() != '\n' || ret < 0) {
        if(i == 3) return 0;
        printf("Bledne dane. Popraw:");

        while (getchar() != '\n');
        i++;
    }
    return ret;
}
 
int main()
{   int pierwsza_zmienna, druga_zmienna, trzecia_zmienna;
    printf("Witaj uzytkowniku.\nBedziesz proszony o podanie trzech liczb calkowitych.\n\n");
    printf("Podaj pierwsza liczbe calkowita:\t");
    
	pierwsza_zmienna =  wczytanie();
 
    printf("Podaj druga liczbe calkowita:\t");
	druga_zmienna = wczytanie();
        
    printf("Podaj pierwsza liczbe calkowita:\t");
    trzecia_zmienna = wczytanie();
   
   
    return 0;
}
