#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "back_end.h"

/* #include <graph.h>
 #include "graphique.h" */

/* aperçu du choix de difficultés:


      |- - - - - - - - - - - - - - - - - - -|
      |              Démineur               |
      |                                     |
      | Choisissez une difficulté:          |
      |                                     |
      |    Facile    Normal    Difficile    |     <-- 3 rectangles
      |                                     |
      |                                     |
      |- - - - - - - - - - - - - - - - - - -|




      aperçu de la grille de jeu (8*8):


      |- - - - - - - - - - - - - - - - - - -|
      |  ******         ChangerDif  Nouveau |
      |                                     |
      |      [] [] [] [] [] [] [] []        |
      |      [] [] [] [] [] [] [] []        |
      |      [] [] [] [] [] [] [] []        |      <-- grises si non
      |  []  [] [] [] [] [] [] [] []        |  <-|      découvertes
      |      [] [] [] [] [] [] [] []        |    | 
      |      [] [] [] [] [] [] [] []        |    |------ case seule 
      |      [] [] [] [] [] [] [] []        |     pour marquer les bombes
      |      [] [] [] [] [] [] [] []        |
      |- - - - - - - - - - - - - - - - - - -|


*/
      
int main(void) {
  /*couleur white=CouleurParComposante(255,255,255), black=CouleurParComposante(0,0,0), grey=CouleurParComposante(125,125,125);
  int size, mode, joueur, pos1, pos2, rejouer=1, arret;*/
  int grille[8][8], decouvert[8][8]; /*1 case fait 40px  1 à 8 val des bombes, 0 aussi et */
  srand(time(NULL));
  InitialiserGrille(1, grille);
  AfficherGrilleTerminal(grille);
  /*InitialiserGraphique();
  CreerFenetre(50,50,451,451);
  while(rejouer==1){
    size=mode=0;
    joueur=pos2=1;
    arret=3;
    On_choisit_les_regles_de_jeu(&rejouer, &size, &mode);
    Initialiser_grille(size, grille);
    EffacerEcran(white);
    Design(size);
    pos1=size*size;
    grille[pos2]=2;
    grille[pos1]=2;
    if(mode==1){
    while(arret==3){
    Joueur_BougeMode1(joueur,grille,&pos1,&pos2,size);
    Blocage_case(mode,joueur,grille, size);
    ChangeJoueur(&joueur);
    arret=Controle_des_joueurs(grille, pos1,  pos2, size);
    }
    }
    if(mode==2){
    while(arret==3){
    Joueur_BougeMode2(joueur,grille,&pos1,&pos2,size);
    Blocage_case(mode,joueur,grille, size);
    ChangeJoueur(&joueur);
    arret=Controle_des_joueurs(grille, pos1,  pos2, size);
    }
    }
    ChoisirCouleurDessin(blue);
    EcrireTexte(140,230,"Fin Du Jeu!!",2);
    EcrireTexte(137,250,"Cliquez pour sortir", 1);
    while(!SourisCliquee());
    EffacerEcran(white);
    ChoisirCouleurDessin(black);
    Fini(arret,mode);
    rejouer=-1;
    while(rejouer==-1){
    while(!SourisCliquee()){}
    ChoixContinuer(&rejouer);
    if(rejouer==0){
    FermerGraphique();
    return EXIT_SUCCESS;
    }
    }
  EffacerEcran(white);
  }*/
}
