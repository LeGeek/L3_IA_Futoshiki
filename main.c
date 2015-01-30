#include "stdio.h"
#include "libUtil.h"


int main() {
    printf("Hello, World!");

    Case cases[25];
    for (unsigned i = 0; i < 25; ++i) {
        cases[i] = creerCase(creer_coordonnes(i/5, i%5), 0, FAUX);
    }
    for (unsigned i = 0; i < 25; ++i) {
        afficher_case(cases[i]);

    }
    return 0;
}