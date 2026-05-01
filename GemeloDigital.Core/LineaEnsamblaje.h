/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _LINEAENSAMBLAJE_H
#define _LINEAENSAMBLAJE_H

#include "Pieza.h"

ref class LineaEnsamblaje {
private: 
    List<Pieza^>^ _colaPiezas;
    int _indiceActual;
    bool _secuenciaAprobada;
    
/**
 * @param pieza
 */
public:

void agregarPieza(Pieza^ pieza);
    
Pieza^ siguientePieza();
    
void aprobarSecuencia();
    
double getAvance();
    
bool estaCompleta();
};

#endif //_LINEAENSAMBLAJE_H