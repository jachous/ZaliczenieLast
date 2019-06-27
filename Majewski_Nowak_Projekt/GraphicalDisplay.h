#pragma once
#include "Display.h"
//#include "MyExceptions.h"
#include <iostream>
class GraphicalDisplay : public Display {
public:
	GraphicalDisplay();
	~GraphicalDisplay();
	void drawTriangle(int a1, int a2, int b1, int b2);
	void drawCircle(int r);
	void drawParallelogram(int a1, int a2, int b1, int b2);
};


