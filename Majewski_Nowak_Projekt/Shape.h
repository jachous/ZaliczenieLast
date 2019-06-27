#pragma once
#include "Display.h"
#include "GraphicalDisplay.h"
#include "TextDisplay.h"
class Shape {
protected:
	Display *display;
public:
	Shape(Display *display);
	virtual void draw();
	void changeDisplay(Display* newDisplay);
};