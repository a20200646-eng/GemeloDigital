/**
 * Project Untitled
 */
#include "pch.h"
using namespace System;
using namespace System::Collections::Generic;


#include "ControladorPiezas.h"

/**
 * ControladorPiezas implementation
 */


/**
 * @return String^
 */
String^ ControladorPiezas::getMenuOpciones() {
    return nullptr ;
}

/**
 * @param accion
 * @return bool
 */
bool ControladorPiezas::tienePermiso(String^ accion) {
    return false;
}

/**
 * @param pieza
 * @return void
 */
void ControladorPiezas::registrarPieza(Pieza^ pieza) {
    return;
}

/**
 * @param id
 * @return void
 */
void ControladorPiezas::marcarDefectuosa(int id) {
    return;
}