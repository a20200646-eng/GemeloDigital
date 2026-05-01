/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _OPERADOR_H
#define _OPERADOR_H

#include "Usuario.h"


ref class Operador: public Usuario {
private: 
    int _brazosAsignados;
    String^ _turno;
public: 
    
String^ getMenuOpciones() override;
    
/**
 * @param accion
 */
bool tienePermiso(String^ accion) override;
    
void confirmarCiclo();
    
void pausarBrazo();
    
void reanudarBrazo();
    
void responderAlerta();
};

#endif //_OPERADOR_H