#include "parser.h"
#include <stdio.h>

bool parserFichier( const char * fichier, Case * tab )
{
  FILE * f;
  f = fopen( fichier, "r" );

  if( !f )
  {
    fprintf( stderr, "Impossible d'ouvrir le fichier '%s' !", fichier );
    return false;
  }

  unsigned tailleGrille;
  fscanf( f, "%d", tailleGrille );

  printf( "Taille grille : %d", tailleGrille );
}