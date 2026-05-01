/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _JEFEOPERACIONES_H
#define _JEFEOPERACIONES_H

#include "Usuario.h"


ref class JefeOperaciones: public Usuario {
private: 
    int _nivelAutorizacion;

public:    
String^ getMenuOpciones() override;
    
/**
 * @param accion
 */
bool tienePermiso(String^ accion) override;
    
void aprobarSecuencia();
    
void detenerLinea();
    
void monitorearEstacion();
};

#endif //_JEFEOPERACIONES_H