/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;


#ifndef _CONTROLADOR_H
#define _CONTROLADOR_H

ref class Controlador {
private: 
    String^ _estadoSistema;
    bool _pausado;
    int _ciclosCompletados;

public:

void inicializar();
    
void iniciarCiclo();
    
void pausar();
    
void reanudar();
    
void detenerEmergencia();
    
String^ getEstadoSistema();
    
int getCiclosCompletados();
};

#endif //_CONTROLADOR_H