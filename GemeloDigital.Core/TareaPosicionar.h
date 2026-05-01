/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;



#ifndef _TAREAPOSICIONAR_H
#define _TAREAPOSICIONAR_H

#include "Tarea.h"


ref class TareaPosicionar: public Tarea {
private: 
    double _posicionObjetivo;
    double _tolerancia;

public:

void ejecutar() override;
    
bool validar() override;
    
double getPosicionObjetivo();
};

#endif //_TAREAPOSICIONAR_H