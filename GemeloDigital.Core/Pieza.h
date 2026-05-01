/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _PIEZA_H
#define _PIEZA_H

#include "EstadoPieza.h"

ref class Pieza {
private: 
    int _id;
    String^ _tipo;
    String^ _material;
    double _peso;
    EstadoPieza _estado;
public:

int getId();
    
String^ getTipo();
    
EstadoPieza getEstado();
    
/**
 * @param estado
 */
void setEstado(EstadoPieza estado);
    
virtual bool validar() = 0;
};

#endif //_PIEZA_H