/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;



#ifndef _GRIPPER_H
#define _GRIPPER_H

#include "Actuador.h"


ref class Gripper: public Actuador {
private: 
    double _apertura;
    double _fuerzaAgarre;
    bool _abierto;
public:
    
void activar() override;
    
void ejecutarAccion() override;
    
String^ getEstado() override;
    
void abrir();
    
void cerrar();
    
/**
 * @param fuerza
 */
void setFuerza(double fuerza);
};

#endif //_GRIPPER_H