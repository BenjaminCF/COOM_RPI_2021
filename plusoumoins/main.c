//--------Rattrapage BRPI BENJAMIN CAPRIOLI-FATON--------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char** argv)
{

    //déclaration des variables
    int mystere = 0, nbentre=0, rematch=1, diff=1;
    int min=1, max=100;
   srand(time(NULL));

   printf("Bienvenue dans le Plus ou Moins developper par Benjamin CAPRIOLI-FATON : \n\n");


   do
   {
    int essai = 0;
    int mode=0;
   //difficulté
   printf("Difficulte : \n \n 1 : jusqu'a 100 \n 2 : jusqu'a 1000 \n 3 : jusqu'a 10000 \n \n");
   scanf("%d",&diff);

   switch(diff)
   {
   case 1:
        max = 100;
        break;
   case 2:
        max = 1000;
        break;
   case 3:
        max = 10000;
        break;

   default:
        max = 1000000;
   }
    printf("Choisiser votre mode de jeu :\n1= Tout seul \n2= 2 joueurs : \n");
    scanf("%d",&mode);


    switch(mode)
    {
    case 1:
   //Nbr aléatoire
    srand(time(NULL));
    mystere = (rand() % (max - min +1)) + min;
    break;

    case 2:
        printf("Joueur 1 Choisisez un nombre en 1 et votre difficulté :\n");
        scanf("%d",&mystere);
        break;
    default:
        printf("tant pis aléatoire");
        srand(time(NULL));
        mystere = (rand() % (max - min +1)) + min;
        printf("%d",mystere);

    }

   do
    {
        essai++;
    //demander le nombre au joueur

        printf("\nVotre nombre est ? \n");
        scanf("%d",&nbentre);


    //comparaison entre le nb entre et le mystere
        if (mystere > nbentre){
            printf("\nC'est plus!\n");
			printf("Tu en est a %d essai ! \n \n",essai);
        }
        else if (mystere < nbentre){
            printf("\nC'est moins! \n");
			printf("Tu en est a %d essai ! \n",essai);
        }
        else
            printf("Wouah tu as trouve le nombre mystere!!\n");


   } while (nbentre != mystere);
   printf  ("Vous avais reussi en %d essai! \n",essai);

    printf("Retente ta chance? ?\n 1 oui \n 2 non \n");
    scanf ("%d",&rematch);

   }while ( rematch == 1);

   printf("Merci d'avoir jouer \n");



   return 0;
}
