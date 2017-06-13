#ifndef _BATALHA_H_
#define _BATALHA_H_

#include "listaEncadeada.h"
#include <cstdlib>


string tipo_monstro( Monstro* monstro);

Monstro* getMonstroPC(Lista<Monstro>* pc, int n);


void batalha(Lista<Monstro>* player, Lista<Monstro>* pc);


#endif //_BATALHA_HPP_