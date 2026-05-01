/**
 * Project Untitled
 */



#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _ACTUADOR_H
#define _ACTUADOR_H

ref class Actuador {
private: 
    int _id;
    bool _activo;
public:
    
int getId();
    
virtual String^ getEstado() = 0;
    
virtual void activar() = 0;
    
virtual void ejecutarAccion() = 0;

};

#endif //_ACTUADOR_H