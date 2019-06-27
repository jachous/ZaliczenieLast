#include "Circle.h"

Circle::Circle(Display* w, int r):Shape(w)		//dziedziczenie displaya z Shape
{
	this->r = r;	//przypisanie wartoœci podanej
}

void Circle::draw()
{
	display->drawCircle(r);		//wyswietlenie na danym wyswietlaczu
}
