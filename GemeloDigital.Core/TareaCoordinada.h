/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _TAREACOORDINADA_H
#define _TAREACOORDINADA_H

#include "Tarea.h"



ref class TareaCoordinada: public Tarea {
private: 
    array<bool>^ _confirmaciones;
    int _totalConfirmado;
    int _totalRequerido;
   
public:

void ejecutar() override;
    
bool validar() override;
    
/**
 * @param indiceBrazo
 */
bool confirmar(int indiceBrazo);
    
void sincronizar();
    
bool estaLista();
};

#endif //_TAREACOORDINADA_H