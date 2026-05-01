/**
 * Project Untitled
 */
#include "pch.h"
using namespace System;
using namespace System::Collections::Generic;

#include "Pieza.h"

int Pieza::getId() {
	return 0;
}

String^ Pieza::getTipo() {
	return nullptr;
}

EstadoPieza Pieza::getEstado() {

	return EstadoPieza::DEFECTUOSA;
}

/**
 * @param estado
 */
void Pieza::setEstado(EstadoPieza estado) {
	return;
}