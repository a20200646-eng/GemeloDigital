/**
 * Project Untitled
 */
#include "pch.h"
using namespace System;
using namespace System::Collections::Generic;

#include "PanelLateral.h"

/**
 * PanelLateral implementation
 */


/**
 * @return void
 */
void PanelLateral::ejecutar() {
    return;
}

/**
 * @return bool
 */
bool PanelLateral::validar() {
    return false;
}

/**
 * @return LadoPanel
 */
LadoPanel PanelLateral::getLado() {
    return LadoPanel::IZQUIERDO;
}

/**
 * @return int
 */
int PanelLateral::getPuntosAnclaje() {
    return 0;
}