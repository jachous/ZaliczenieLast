#include "Shape.h"
Shape::Shape(Display *w)
{
	display = w;		//przypisanie wy�wietlacza
}

void Shape::draw()
{
}

void Shape::changeDisplay(Display* newDisplay)
{
	display = newDisplay;		//tworzenie nowego wy�wietlacza
}
