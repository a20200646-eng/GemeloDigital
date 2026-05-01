/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _SERVOMOTOR_H
#define _SERVOMOTOR_H

#include "Actuador.h"


ref class Servomotor: public Actuador {
private: 
    int _pulsosPWM;
    double _torqueMaximo;
    double _velocidadGiro;

public:

void activar() override;
    
void ejecutarAccion() override;
    
String^ getEstado() override;
    
/**
 * @param pulsos
 */
void setPWM(int pulsos);
};

#endif //_SERVOMOTOR_H