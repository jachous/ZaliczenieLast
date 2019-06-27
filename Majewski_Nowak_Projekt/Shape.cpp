#include "Shape.h"
Shape::Shape(Display *w)
{
	display = w;		//przypisanie wyœwietlacza
}

void Shape::draw()
{
}

void Shape::changeDisplay(Display* newDisplay)
{
	display = newDisplay;		//tworzenie nowego wyœwietlacza
}
