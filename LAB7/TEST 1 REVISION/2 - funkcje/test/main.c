#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tekst[] = "Litwo! Ojczyzno moja! Ty jeste� jak zdrowie. Nazywa� si� niedawno w wielkiej peruce, kt�r� do ojca Podkomorzego, Mo�ciwego Pana zast�puje i bagnami skrada� si� dowie kto go my�lano do dworu. Tu Ko�ciuszko w polskiej szacie siedzi jak noga moja nie mog�. S�o�ce ostatnich nie czytano w Pa�skim pisano zakonie i z Warszaw mam list, to m�wi�c, �e nasi synowie i wr�ciwszy w miechu. Starzy na to m�wi�c, �e go kaznodziej�, �e zamczysko wzi�li�my w posiad�o��. Wszak�e kto ci� straci�. Dzi� cz�owieka rodu, obyczaj�w! Do��, �e oko pa�skie jacha� szlachcic m�ody panek i ju� to m�wi�c, �e nasi synowie i nazwisko.";
    int DuzeLitery = 0;
    for(int i=0; tekst[i]!='\0'; i++)
    {
        if(tekst[i]>=65 && tekst[i] <=90)
            DuzeLitery = DuzeLitery + 1;

    }


    printf("%d", DuzeLitery);
    return 0;
}
