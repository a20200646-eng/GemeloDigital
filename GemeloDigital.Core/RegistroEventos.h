/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;



#ifndef _REGISTROEVENTOS_H
#define _REGISTROEVENTOS_H

ref class RegistroEventos {
private: 
    int _totalEventos;
    int _totalErrores;
    int _totalAlertas;
    List<String^>^ _historial;
    
/**
 * @param nivel
 * @param descripcion
 */
public:

void log(String^ nivel, String^ descripcion);
    
String^ getHistorial();
    
int getTotalErrores();
    
int getTotalAlertass();
    
void limpiar();
};

#endif //_REGISTROEVENTOS_H