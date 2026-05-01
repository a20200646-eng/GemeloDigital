/**
 * Project Untitled
 */
#include "pch.h"
using namespace System;
using namespace System::Collections::Generic;


#include "BrazoRobotico.h"

/**
 * BrazoRobotico implementation
 */


/**
 * @return void
 */
void BrazoRobotico::inicializar() {
    return;
}

/**
 * @return void
 */
void BrazoRobotico::calibrar() {
    return;
}

/**
 * @param idArticulacion 
 * @param angulo 
 * @return void
 */
void BrazoRobotico::moverA(int idArticulacion , double angulo ) {
    return;
}

/**
 * @return EstadoBrazo
 */
EstadoBrazo BrazoRobotico::getEstado() {
    return EstadoBrazo::REPOSO;
}

/**
 * @return RolBrazo
 */
RolBrazo BrazoRobotico::getRol() {
    return RolBrazo::CENTRAL_SUP ;
}

/**
 * @return void
 */
void BrazoRobotico::pausar() {
    return;
}

/**
 * @return void
 */
void BrazoRobotico::reanudar() {
    return;
}