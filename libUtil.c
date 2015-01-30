#include <ksba.h>
#include "libUtil.h"
#include "stdbool.h"

Coordonnees creer_coordonnes(int x, int y) {
    Coordonnees coordonnees1;
    coordonnees1.x = x;
    coordonnees1.y = y;
    return coordonnees1;
}

void afficher_coordonnees(Coordonnees coordonnees1) {
    printf("(%d, %d)", coordonnees1.x, coordonnees1.y);
}

Case creerCase(Coordonnees coordonnees, unsigned int valeur, VALEUR_FIXE valeurFixe) {
    Case result;
    result.coordonnes = coordonnees;
    result.valeur = valeur;
    result.valeurFixe = valeurFixe;

    return result;

}


void afficher_case(Case aCase) {
    printf("Coordonnées : ");
    afficher_coordonnees(aCase.coordonnes);
    printf(", valeur = (%d)\n", aCase.valeur);
}

bool controleDifferenceCase(Case aCaseA, Case aCaseB) {

    return false;
}
