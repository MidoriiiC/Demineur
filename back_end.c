#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int NombreBombesAdjacentes(int l, int c, int tab[8][8]){
  int k=0;

 /* au dessus de la case*/
  if(c>0&&l>0)
    if(tab[l-1][c-1]==-1) k++;
  if(l>0)
    if(tab[l-1][c]==-1) k++;
  if(l>0&&c<7)
    if(tab[l-1][c+1]==-1) k++;

  /* à côté*/

  if(c>0)
    if(tab[l][c-1]==-1) k++;
  if(c<7)
    if(tab[l][c+1]==-1) k++;

  /* en dessous */
  if(c>0&&l<7)
    if(tab[l+1][c-1]==-1) k++;
  if(l<7)
    if(tab[l+1][c]==-1) k++;
  if(l>0&&c<7)
    if(tab[l+1][c+1]==-1) k++;


  return k;
}


void AfficherGrilleTerminal(int tab[8][8]){
  int l,c;
  for(l=0;l<8;l++){
    for(c=0;c<8;c++){
      printf("%d| ",tab[l][c]);
    }
    printf("\n");
  }
}

void PreparerGrille(int tab[8][8]){
  int n, l, c;
  for(l=0;l<8;l++){
    for(c=0,n=0;c<8;c++){
      if(tab[l][c]!=-1){
      n=NombreBombesAdjacentes(l,c,tab);
      tab[l][c]=n;
      }
    }
  }
}



/* Cette fonction est utilisée pour générer une nouvelle grille*/
void InitialiserGrille(int diff, int tab[8][8]){
  int n, l, c;
  n=rand()%25;
  for(l=0;l<8;l++){
    for(c=0;c<8;c++){
	n=rand()%25;
      if(n<(4*diff)) tab[l][c]=-1;
      else tab[l][c]=0;
    }
  }
  PreparerGrille(tab);
}




