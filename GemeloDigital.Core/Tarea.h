/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _TAREA_H
#define _TAREA_H

ref class Tarea {
private: 
    int _id;
    String^ _estado;

public:

int getId();
    
String^ getEstado();
    
virtual void ejecutar() = 0;
    
virtual bool validar() = 0;
};

#endif //_TAREA_H