/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _ESTRUCTURATECHO_H
#define _ESTRUCTURATECHO_H

#include "Pieza.h"


ref class EstructuraTecho: public Pieza {
private: 
    int _puntosUnion;
    double _anchura;
public:
    
void ejecutar();
    
bool validar() override;
    
int getPuntosUnion();
    
double getAnchura();
};

#endif //_ESTRUCTURATECHO_H