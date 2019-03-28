#include <stdio.h>
#include <stdlib.h>
// rajouter graph.h et les autres plus tard

char panneauActif;

/* Cette fonction, utilisée avant une partie, va renvoyer une valeur (1,2 ou 3) qui représente 
la difficulté choisie par le joueur */

int ChoisirDifficulte(){
  panneauActif='0';
  // faire les rectangles pour Facile, Moyen et Difficile
  // écrire Choisissez la difficulté
  // écrire le contenu des rectangles
  // voir les fonctions pour les clics
  return 0;
}




/* Cette fonction, utilisée à chaque tour, redessine toutes les cases grâce 
à un tableau fourni
les chiffres de 1 à 8 du tableau représentent les cases à proximité
des bombes, 0 est une case vide mais découverte. -1 est une bombe marquée.
Une case non découverte sera représentée par -5 
*/
void dessineFenetre(int tab[][]){
  int l, c=0;

  //+bouton changerDif, Nouveau et le drapeau

  
  for (l=0, l<8, l++){  //pour chaque ligne
    for (c=0, c<8, c++){
      if(tab[l][c]==-5) ;//faire un carré gris avec telle et telle pos
    }
    //sauter une ligne dans les vals de dessin?
  }
}


char MarquageBombeActif(){
  if(panneauActif=='0'){
    //dessiner un rectangle rouge
    ;
  }
  else;
    //dessiner un rectangle blanc aux mêmes paramètres
}

