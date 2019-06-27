#pragma once
#include "Shape.h"
#include <vector>
using namespace std;
class Complex : public Shape {
private:
	vector <Shape*> kompleks;
public:
	Complex(Display* w);
	bool add(Shape* o);
	void draw();
};
