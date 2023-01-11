#ifndef CIRCULO_H
#define CIRCULO_H

#include<stdio.h>
#include "figura.h"

class Circulo : public Figura {
private:
	int radio;

public:
	Circulo();
	Circulo(int, int, int, int, int);
	float calcularArea();
	float calcularPerimetro();

	string pintar();
};

#endif
