#pragma once
#include <iostream>
#include <math.h>
#include "GraphicalDisplay.h"
#include "TextDisplay.h"
#include "Circle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Complex.h"
#include "Display.h"
#include "Shape.h"


int main() {
	Display* w1 = new GraphicalDisplay();		//tworzenie nowego wyœwietlacza graficznego
	Display* w2 = new TextDisplay();			//tworzenie nowego wyœwietlacza tekstu
	Shape* o1 = new Triangle(w1, 3, 2, 2, -2);		//tworzenie nowych obiektów na wyœwietlaczu graficznym
	Shape* o2 = new Parallelogram(w1, 3, 2, 2, -2);
	Shape* o3 = new Circle(w1, 5);
	Complex* o4 = new Complex(w1);
	o4->add(o1);
	o4->add(o2);
	o4->add(o3);
	o4->draw();
	o1->draw();				//wywo³anie funkcji draw na obiektach
	o2->draw();
	o3->draw();
	o1->changeDisplay(w2);
	o2->changeDisplay(w2);	//zmiana sposobu wyœwietlania
	o3->changeDisplay(w2);
	o4->changeDisplay(w2);
	o4->draw();
	o1->draw();
	o2->draw();				//wywo³anie funkcji draw tekstowo
	o3->draw();
	o4->draw();
	delete o1;
	delete o2;
	delete o3;
	delete o4;
	delete w2;
	delete w1;
	getchar();
	return 0;
}