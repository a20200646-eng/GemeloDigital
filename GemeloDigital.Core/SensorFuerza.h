/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _SENSORFUERZA_H
#define _SENSORFUERZA_H

#include "Sensor.h"



ref class SensorFuerza: public Sensor {
private: 
    double _fuerzaActual;
    double _fuerzaMinima;
    double _fuerzaMaxima;
    
public: 

double leer() override;
    
bool validar() override;
    
/**
 * @param min 
 * @param max
 */
void setRango(double min , double max);
    
bool estaEnRango();
};

#endif //_SENSORFUERZA_H