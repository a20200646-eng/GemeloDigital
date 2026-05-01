/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _SENSOR_H
#define _SENSOR_H

ref class Sensor {
public: 
    int _id;
    bool _activo;
    
int getId();
    
void activar();
    
virtual double leer() = 0;
    
virtual bool validar() = 0;
};

#endif //_SENSOR_H