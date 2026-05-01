/**
 * Project Untitled
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;



#ifndef _REPORTECOSTOS_H
#define _REPORTECOSTOS_H

ref class ReporteCostos {
private: 
    int _ciclosCompletados;
    double _tiempoOperativo;
    int _erroresRegistrados;
    double _costoPorCiclo;
    
public:
void calcular();
    
/**
 * @param ruta
 */
void exportar(String^ ruta);
    
double getCostoTotal();
    
double getTiempoOperativo();
    
String^ resumen();
};

#endif //_REPORTECOSTOS_H