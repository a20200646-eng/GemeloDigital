/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _USUARIO_H
#define _USUARIO_H

#include "RolUsuario.h"

ref class Usuario {
private: 
    String^ _nombre;
    String^ _contrasenha;
    RolUsuario _rol;
public:
    
String^ getNombre();
    
RolUsuario getRol();
    
virtual String^ getMenuOpciones() = 0;
    
/**
 * @param accion
 */
virtual bool tienePermiso(String^ accion) = 0;
};

#endif //_USUARIO_H