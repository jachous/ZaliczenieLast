#pragma once
#include "Display.h"
#include <iostream>
class TextDisplay : public Display {
public:
	void drawTriangle(int a1, int a2, int b1, int b2) {
		printf("Drawing a triangle from vectors (%d, %d), (%d, %d).\n", a1, a2, b1, b2);
	}

	void drawCircle(int r) {
		printf("Drawing a circle with radius %d.\n", r);
	}

	void drawParallelogram(int a1, int a2, int b1, int b2) {
		printf("Drawing a parallelogram from vectors (%d, %d), (%d, %d).\n", a1, a2, b1, b2);
	}
};
