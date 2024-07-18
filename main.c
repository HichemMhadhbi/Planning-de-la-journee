/*
Vous venez d'arriver au bord d'un grand lac que vous devez contourner, par un c�t� ou l'autre, peu importe. Vous avez r�ussi � trouver une carte d�crivant la position exacte de tous les villages le long de la route qui longe la rive du lac. Sachant que vous pouvez marcher 50 km dans la journ�e, vous aimeriez savoir dans combien de villages diff�rents vous pourriez dormir la nuit prochaine.

Ce que doit faire votre programme :
Votre programme doit d'abord lire un entier d�crivant votre position actuelle sur la route, sous la forme d'un nombre de kilom�tres par rapport au d�but de la route. Ensuite, il doit lire un entier donnant le nombre de villages. Pour chaque village, il doit lire un entier d�crivant la position de ce village le long de cette m�me route. Votre programme doit alors afficher le nombre de villages qui se trouvent � une distance inf�rieure ou �gale � 50 km de votre position actuelle.
EXAMPLE

input:
120
5
30
113
187
145
129

output:
3
COMMENTS
Vous �tes � la position 120 et il y a donc trois villages � moins de 50 km : ceux aux positions 113, 145 et 129. Les deux autres villages sont trop lointains.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, position, nbVillages, posisionPlusGrand, count;
    printf("Veuillez saisir la position actuelle : ");
    scanf("%d", &position);

    printf("Veuillez saisir la nombre de villages : ");
    scanf("%d", &nbVillages);
    count = 0;

    printf("Veillez saisir la position selon la condition que plus grande que la position actuelle  : \n");
    for (i = 0 ; i < nbVillages ; i++){
        scanf("%d", &posisionPlusGrand);

        if (abs(posisionPlusGrand -  position) <= 50){
             count ++;
        }
    }
    printf("Le nombre de villages a moins de 50 km est : %d ",count);
    return 0;
}
