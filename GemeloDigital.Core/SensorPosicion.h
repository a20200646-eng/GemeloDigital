/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _SENSORPOSICION_H
#define _SENSORPOSICION_H

#include "Sensor.h"



ref class SensorPosicion: public Sensor {
private: 
    double _anguloMedido;
    double _tolerancia;
public:

double leer() override;
    
bool validar() override;
    
double getAngulo();
};

#endif //_SENSORPOSICION_H