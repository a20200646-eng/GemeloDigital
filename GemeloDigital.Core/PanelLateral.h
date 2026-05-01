/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _PANELLATERAL_H
#define _PANELLATERAL_H

#include "Pieza.h"
#include "LadoPanel.h"


ref class PanelLateral: public Pieza {
private: 
    LadoPanel _lado;
    int _puntosAnclaje;

public:
    
void ejecutar();
    
bool validar() override;
    
LadoPanel getLado();
    
int getPuntosAnclaje();
};

#endif //_PANELLATERAL_H