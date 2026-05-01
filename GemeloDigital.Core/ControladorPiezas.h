/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _CONTROLADORPIEZAS_H
#define _CONTROLADORPIEZAS_H

#include "Usuario.h"
#include "Pieza.h"


ref class ControladorPiezas: public Usuario {
private: 
    int _inventario;

public:     
String^ getMenuOpciones() override;
    
/**
 * @param accion
 */
bool tienePermiso(String^ accion) override;
    
/**
 * @param pieza
 */
void registrarPieza(Pieza^ pieza) override;
    
/**
 * @param id
 */
void marcarDefectuosa(int id);
};

#endif //_CONTROLADORPIEZAS_H