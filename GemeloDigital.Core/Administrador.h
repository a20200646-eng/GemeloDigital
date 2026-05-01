/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H

#include "Usuario.h"


ref class Administrador: public Usuario {
private: 
    int _nivelAcceso;
    
    
    
/**
 * @param accion
 */
public:

String^ getMenuOpciones() override;

bool tienePermiso(String^ accion) override;
    
void gestionarCuentas();
    
void generarReporte();
    
void exportarHistorial();
};

#endif //_ADMINISTRADOR_H