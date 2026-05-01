/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _TAREASOLDAR_H
#define _TAREASOLDAR_H

#include "Tarea.h"


ref class TareaSoldar: public Tarea {
private: 
    int _puntosObjetivo;
    int _puntosCompletados;
    double _temperatura;


public:

void ejecutar() override;
    
bool validar() override;
    
int getPuntosCompletados();
    
double getProgreso();
};

#endif //_TAREASOLDAR_H