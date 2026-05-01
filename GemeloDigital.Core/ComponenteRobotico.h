/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _COMPONENTEROBOTICO_H
#define _COMPONENTEROBOTICO_H

ref class ComponenteRobotico {
private: 
    int _id;
    String^ _nombre;
    bool _activo;

public:    
void activar();
    
void desactivar();
    
virtual String^ getEstado() = 0;
    
virtual bool validar() = 0;
    
virtual void resetear() = 0;
};

#endif //_COMPONENTEROBOTICO_H