#pragma once
#include "Shape.h"
class Circle : public Shape {
private:
	int r;
public:
	Circle(Display* w, int r);
	void draw();
};

