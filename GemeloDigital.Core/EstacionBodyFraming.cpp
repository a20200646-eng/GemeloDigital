/**
 * Project Untitled
 */
#include "pch.h"
using namespace System;
using namespace System::Collections::Generic;




#include "EstacionBodyFraming.h"

/**
 * EstacionBodyFraming implementation
 */


/**
 * @return void
 */
void EstacionBodyFraming::inicializar() {
    return;
}

/**
 * @return bool
 */
bool EstacionBodyFraming::sincronizar() {
    return false;
}

/**
 * @param indice
 * @return EstadoBrazo
 */
EstadoBrazo EstacionBodyFraming::getEstadoBrazo(int indice) {
    return EstadoBrazo::REPOSO ;
}

/**
 * @return void
 */
void EstacionBodyFraming::pausarTodos() {
    return;
}

/**
 * @return void
 */
void EstacionBodyFraming::reanudarTodos() {
    return;
}

/**
 * @return void
 */
void EstacionBodyFraming::detenerEmergencia() {
    return;
}