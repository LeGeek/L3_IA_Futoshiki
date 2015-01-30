#ifndef __PARSER_H__
#define __PARSER_H__

#include "libUtil.h"

/**
* \fn bool parserFichier( const char * fichier, Case * tab )
* \brief Parse un fichier pour ramplir un tableau de case
* \param[in] fichier URI du fichier à parser
* \param[in, out] tab Tableau à remplir par le fichier
*/
bool parserFichier( const char * fichier, Case * tab );

#endif