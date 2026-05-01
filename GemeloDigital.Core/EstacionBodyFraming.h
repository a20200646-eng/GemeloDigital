/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _ESTACIONBODYFRAMING_H
#define _ESTACIONBODYFRAMING_H

#include "BrazoRobotico.h"

ref class EstacionBodyFraming {
private: 
    BrazoRobotico^ _brazo1;
    BrazoRobotico^ _brazo2;
    BrazoRobotico^ _brazo3;
    String^ _estadoEstacion;

public:
    
void inicializar();
    
bool sincronizar();
    
/**
 * @param indice
 */
EstadoBrazo getEstadoBrazo(int indice);
    
void pausarTodos();
    
void reanudarTodos();
    
void detenerEmergencia();
};

#endif //_ESTACIONBODYFRAMING_H