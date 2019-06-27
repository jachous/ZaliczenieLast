#include "Complex.h"
#include "Complex.h"

Complex::Complex(Display* w) : Shape(w)
{

}

bool Complex::add(Shape* o)
{
	if (Complex::kompleks.size() < 5)
	{
		Complex::kompleks.push_back(o);
		return true;
	}
	else
		return false;
}

void Complex::draw()
{
}
