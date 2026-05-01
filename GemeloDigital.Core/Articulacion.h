/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;



#ifndef _ARTICULACION_H
#define _ARTICULACION_H

#include "ComponenteRobotico.h"


ref class Articulacion: public ComponenteRobotico {
private: 
    double _anguloActual;
    double _anguloMinimo;
    double _anguloMaximo;
    
/**
 * @param angulo
 */

public:
void moverA(double angulo);
    
String^ getEstado() override;
    
bool validar() override;
    
void resetear() override;
};

#endif //_ARTICULACION_H