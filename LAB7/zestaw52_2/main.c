#include <stdio.h>
#include <stdlib.h>

//Nie do ko�ca zrozumia�em polecenie - czy funkcja ma zwr�ci� sum� ilo�ci tych wielokrotno�ci, kt�re spe�niaj� te warunki,
//czy Funkcja powinna zwr�ci� sum� warto�ci tych wielokrotno�ci

//ponizej funkcja zwracaj�ca sum� warto�ci gotowych juz wielokrotno�ci wi�kszych od m i mniejszych od k
int function2(unsigned int n, unsigned int m, unsigned int k)
{
    int sum = 0;
    int i = 0;
    for(i=0; i<k; i++)
    {
        if(i*n>m && i*n<k)
        sum = sum + i*n;
    }
    return sum;

}

//ponizej funkcja zwracajaca sum� ilo�ci tych wielokrotno�ci wi�kszych od m i mniejszych od k
int function2_2(unsigned int n, unsigned int m, unsigned int k)
{
    int sum = 0;
    int i = 0;
    for(i=0; i<k; i++)
    {
        if(i*n>m && i*n<k)
        sum = sum + 1;
    }
    return sum;

}

int main()
{

    int n1 = 4;
    int m1 = 21;
    int k1 = 43;

    int n2 = 8;
    int m2 = 4;
    int k2 = 7;

    printf("Suma (wartosci) wielokrotnosci :\n");

    printf("%d\n", function2(n1, m1, k1));
    printf("%d\n", function2(n2, m2, k2));

    printf("Suma (ilosci) wielokrotnosci :\n");

    printf("%d\n", function2_2(n1, m1, k1));
    printf("%d\n", function2_2(n2, m2, k2));

    return 0;
}
