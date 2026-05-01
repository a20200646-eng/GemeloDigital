/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;

#ifndef _BRAZOROBOTICO_H
#define _BRAZOROBOTICO_H

#include "Articulacion.h"
#include "Gripper.h"
#include "RolBrazo.h"
#include "EstadoBrazo.h"
#include "Sensor.h"

ref class BrazoRobotico {
private: 
    array<Articulacion^>^ _articulaciones; //numero fijo de articulaciones
    Gripper^ _gripper;
    List<Sensor^>^ _sensores; //La cantidad de sensores puede cambiar
    RolBrazo _rol;
    EstadoBrazo _estado;

public:
    
void inicializar();
    
void calibrar();
    
/**
 * @param idArticulacion 
 * @param angulo
 */
void moverA(int idArticulacion , double angulo );
    
EstadoBrazo getEstado();
    
RolBrazo getRol();
    
void pausar();
    
void reanudar();
};

#endif //_BRAZOROBOTICO_H