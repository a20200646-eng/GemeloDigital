/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _ESTACIONTRABAJO_H
#define _ESTACIONTRABAJO_H

#include "Pieza.h"

ref class EstacionTrabajo {
private: 
    int _id;
    String^ _tipoPiezaAceptada;
    bool _ocupada;
    
/**
 * @param pieza
 */

public:

void asignarPieza(Pieza^ pieza);
    
void liberarPieza();
    
bool estaOcupada();
    
Pieza^ getPieza();
};

#endif //_ESTACIONTRABAJO_H