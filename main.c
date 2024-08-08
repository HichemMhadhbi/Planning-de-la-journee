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
