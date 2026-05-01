/**
 * Project Untitled
 */

#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _TAREASOSTENER_H
#define _TAREASOSTENER_H

#include "Tarea.h"


ref class TareaSostener: public Tarea {
private: 
    double _fuerzaSosten;
    double _duracion;

public:
    
void ejecutar() override;
    
bool validar() override;
    
double getFuerzaSosten();
};

#endif //_TAREASOSTENER_H