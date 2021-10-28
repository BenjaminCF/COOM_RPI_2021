//--------Rattrapage BRPI BENJAMIN CAPRIOLI-FATON--------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char** argv)
{

    //déclaration des variables
    int mystere = 0, nbentre=0, essai=0, rematch=1, diff=1;
    int min=1, max=100;
   srand(time(NULL));

   printf("Bienvenue dans le Plus ou Moins developper par Benjamin CAPRIOLI-FATON : \n\n");

   do
   {

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
        printf("Pas de niveau choisi? Tant pis je met encor plus dur \n");
        max = 1000000;
   }


   //Nbr aléatoire
    srand(time(NULL));
    mystere = (rand() % (max - min +1)) + min;

    //printf("Bienvenu dans notre jeux du Plus ou Moins \n \n");


   do
    {
        essai++;
    //demander le nombre au joueur

        printf("\nVotre nombre est ? \n ");
        scanf("%d",&nbentre);


    //comparaison entre le nb entre et le mystere
        if (mystere > nbentre)
            printf("C'est plus!\n");

        else if (mystere < nbentre)
            printf("C'est moins! \n");

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
