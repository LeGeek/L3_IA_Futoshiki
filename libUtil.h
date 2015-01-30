#include <stdbool.h>

#define TAILLE_GRILLE 10
#define VALEUR_VIDE 0;

typedef struct coordonnees {
    int x;
    int y;
} Coordonnees;



typedef enum valeur_fixe {
    VRAI, FAUX
} VALEUR_FIXE;

typedef struct Case {
    Coordonnees coordonnes;
    unsigned int valeur;
    bool estFourni;
    Coordonnees jeDoisEtreSuperiereA[];
    Coordonnees jeDoisEtreInferieureA[];
} Case;

typedef struct fukushiki {
    Case cases[];
} Fukushiki;


Coordonnees creer_coordonnes(int x, int y);

void afficher_coordonnees(Coordonnees coordonnees1);

Case creerCase(Coordonnees coordonnees, unsigned int valeur, bool estFourni);

void afficher_case(Case aCase);

bool controle_contraintes(Case aCase);
bool controleDifferenceCase(Case aCaseA, Case aCaseB);
bool controleDifferenceLigne(Case aCase);

