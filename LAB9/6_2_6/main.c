#include <stdio.h>
#include <stdlib.h>
/* W zadaniu 6_2_6 : Nie bardzo wiem jak zwolni� ca�� 3wymiarow� tablic� w tej wersji - przy wersji wska�nikowej w zadaniu 6_2_5
 zwalniam ka�dy wymiar po kolei i program dzia�a prawid�owo, ale w tym wypadku, gdy pr�buj� zrobi� to samo, program na koniec nie zwraca zera, wi�c domy�lam si�, �e co� robi� �le.
Pr�buj�c jednak zwolni� tablic� tylko poprzez ,, free(tab) '' - funkcja zwalnia tylko pierwszy wymiar, a reszta pozostaje bez zmian, chyba �e co� �le rozumuj�, aczkolwiek warto�ci opr�cz pierwszego wiersza pozostaj� takie same jak wcze�niej wprowadzone
W zadaniu 6_2_14 : Program nie bardzo chce dzia�a� i wynika to chyba ze �le zdeklarowanej tablicy, tablice 3wymiarowe deklarowane w ten spos�b zdecydowanie s� dla mnie mniej zrozumia�e od wska�nikowej wersji
 */
int (**foo(unsigned int n, unsigned int m, unsigned int k))[]{

    return malloc(n*sizeof(int[m][k]));

}

void freedom(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    free(tab);
}

void elementy(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("[%d, %d, %d] = ", i, j, l);
                scanf("%d", &tab[i][j][l]);
            }

        }
    }
}
void wyswietl(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("[%d %d %d] = %d\n", i, j, l, tab[i][j][l]);
            }

        }
    }
}

int main()
{
    int n=2;
    int m=2;
    int k=2;
    int (**tab1)[k]=foo(n, m, k);
    elementy(n, m, k, tab1);
    printf("\nTAB :\n");
    wyswietl(n, m, k, tab1);

    //zwolnienie pamieci
    freedom(n, m, k, tab1);
    wyswietl(n, m, k, tab1);

    return 0;
}
